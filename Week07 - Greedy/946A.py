ans = 0 #maximum possible value of B - C, where B is the sum of elements of sequence b, and C is the sum of elements of sequence c. TL;DR-> the answer.
input() #(dummy) - the number of elements in a.
l = [int(i) for i in input().split()] #the elements of sequence a.
for num in l:
    ans += abs(num)
print(ans)