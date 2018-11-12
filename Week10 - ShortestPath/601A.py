CONST_MAX = 999999999

adj_matrix = []
source_dist = []

def BFS(t):
    visited = []
    for i in range(500):
        source_dist.append(CONST_MAX)
        visited.append(False)
    queue = []
    queue.append(1)
    visited[1] = True
    source_dist[1] = 0
    while len(queue) > 0:
        current = queue[0]
        del queue[0]
        for i in range(1, n+1):
            if t == True:
                if adj_matrix[current][i]==1 and visited[i] == False:
                    queue.append(i)
                    visited[i] = True
                    source_dist[i] = source_dist[current]+1
                    if i==n: return
            else:
                if adj_matrix[current][i]==0 and visited[i] == False:
                    queue.append(i)
                    visited[i] = True
                    source_dist[i] = source_dist[current]+1
                    if i==n: return

n, m = map(int, input().split()) # town amount & railway amount
t = 0 # toggle train mode (if false -> bus mode); also be used as time with train
b = 0 # time with bus

for i in range(500):
    adj_matrix.append([])
    for j in range(500):
        adj_matrix[i].append(0)

for i in range(m):
    u, v = map(int, input().split()) # town source & town destination
    adj_matrix[u][v] = 1
    adj_matrix[v][u] = 1

if adj_matrix[1][n]==1: t = True

if t:
    BFS(False)
    b = source_dist[n]
else:
    BFS(True)
    t = source_dist[n]

if max(b,t)==CONST_MAX: print(-1)
else: print(max(b,t))