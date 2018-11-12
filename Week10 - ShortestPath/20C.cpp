#include <bits/stdc++.h>

using namespace std;

const int SZ = 1e5+5;
vector<pair<int,int>> connections[SZ];
int prev[SZ];
long long int shortestDistance[SZ] = {0};
bool visited[SZ] = {0};

void dijkstra(int start)
{
    typedef tuple<long long int, int, int> path;
    long long int weight;
    int src, dest;
    priority_queue<path, vector<path>, greater<path>> pq;
    pq.push(make_tuple(0, start, -1));
    while(pq.empty() == false) {
        path current = pq.top();
        pq.pop();
        weight = get<0>(current);
        dest = get<1>(current);
        src = get<2>(current);
        if(visited[dest] == false) {
            visited[dest] = true;
            ::prev[dest] = src;
            for(int i=0; i<connections[dest].size(); i++) {
                if(visited[connections[dest][i].first] == false)
                    pq.push(make_tuple(weight+connections[dest][i].second, connections[dest][i].first, dest));
            }
        }
    }
}

int main()
{
    /* -- INFORMATION REGARDING VARIABLES
        a: node source
        b: node destination
        m: edges amount
        n: vertex amount
        w: weight of edge
    -- */
    int a, b, m, n, w;
    cin >> n >> m;
    for(int i=0; i<SZ; i++) {
        ::prev[i] = -1;
    }
    while(m--) {
        cin >> a >> b >> w;
        connections[a].push_back(make_pair(b, w));
        connections[b].push_back(make_pair(a, w));
    }
    dijkstra(1);
    if(::prev[n] == -1)
        cout << -1;
    else {
        stack<int> vertex;
        while(n > 0) {
            vertex.push(n);
            n = ::prev[n];
        }
        while(vertex.empty() == false) {
            cout << vertex.top() << " ";
            vertex.pop();
        }
    }
    return 0;
}
