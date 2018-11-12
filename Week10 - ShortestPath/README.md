# 20C ([Submission](https://codeforces.com/contest/20/submission/45592295))
**Dijkstra?** Yes. This problem used Dijkstra algorithm.  
Read more about Dijkstra Algorithm [here](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm). We just need to implement the algorithm and store the previous (or source) vertex because we need that for the answer output. Instead of using pair, we need an additional space to store the source vertex (that explains why the usage of tuple is necessary in order to tackle this problem). After we execute Dijkstra algorithm we just have to "trace-back" the process using stack and pop them all up. This will return the path we've gone through to get the minimum distance.  
Worst Case Complexity: `O(E*log(V)) where E->Edges; and V->Vertices`

# 601A ([Submission](https://codeforces.com/contest/601/submission/45593546))
**The Two Routes**.  
Find the longest time that a vehicle took when traveling from city 1 to n. Note that if there's already a railway from city 1 to n, there's no need to find the shortest path because you could just go to city n immediately. In other words, if there's a railway from city 1 to city n, we just have to find how much time will it take for the bus to arrive to city n. the distance by default has a default value of `999999999` in my code. So, if we has gone through the BFS function and the distance to city n is still `999999999`, this means there's no way the bus (or train) could arrive at that city. That is why we output -1. If it is possible for both vehicle to arrive at city n, we output the longest time that the vehicles take to get there.  
Worst Case Complexity: `O(n^2)`
