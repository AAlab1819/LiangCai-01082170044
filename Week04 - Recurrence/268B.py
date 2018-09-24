n = int(input()) #buttons
answer = 0
for i in range(1, n+1):
    answer += (i * (n-i if n-i>0 else 1) )
print(answer)