# 115A ([Submission](https://codeforces.com/contest/115/submission/43668490))
**Party**. The title is misleading. This ain't a party, this is a one way ticket to madness.\
To do this problem, you basically just have to print the depth of the tree.\
Oh, and make the employee who has no superior (`-1`) to be the root.
```
Example:
[Format: Employee_No(Superior_No)]
   1(-1)	-> Depth: 1
   /
  2(1)		-> Depth: 2
 /   \
3(2) 4(2)	-> Depth: (3)

Output: 3
```
I used `map` of `<int,int>` to record the current employee and its corresponding superior or manager if you will. After we input the employees and its corresponding manager, we can loop and 'trace back' until the manager of current employee is `-1` (this is why we make the employee with `-1` manager to be the root) while incrementing a variable `current_depth` by one every cycle. After that, if `current_depth` is greater than `max_depth`, assign `current_depth` to `max_depth`.\
Finally, print out the maximum depth (`max_depth`). This will give you the answer.

Worst Case Complexity: `O(n log n)`

# 913B ([Submission](https://codeforces.com/contest/913/submission/43670509))
**Christmas Spruce**. Merry Christmas kids, here's a buttload of work for you.\
The input phase is where I was bamboozled. However, after a quick 'research' ;) I can finally construct my tree with the correct informations.\
I used `map` of `<int, vector<int>>` to simulate a tree. The first int is the value of that vertex and the `vector` of `int` being vertices that is connected to this vertex.\
The problem asks you to detect whether there is a vertex with less than 3 leaf vertices (no more branching). If there are, print `No` else print `Yes`.

To tackle this problem we need to input the data (format according to the problem's test cases). Then, we can cycle each vertex's connections and see if that vertex has less than 3 leaf vertices or not. If we found out that there is a vertex with less than 3 leaf vertices, print `No` and quit the program. However, if there is none, the cycle will finish and a `Yes` will be printed.

We are not finished just yet. There is only one more loophole. What if the user wanted to only input 3 vertices in the tree? This will pass through the loop and will instantly print `Yes` (even though it should be a `No`). Well, just do a ternary :/ and you are done.

Worst Case Complexity: `O(n log n)`

# 4C ([Submission](https://codeforces.com/contest/4/submission/43670760))
**Registration System**. This is OK, no comment on this one :)\
I used `map` of `<string,int>` to record the data of the `username`s and how many times it was input.\
First, user will input how many times he/she wants to input usernames. Then, loop it and if the currently input username is equal to 0 in the map, this means that it's new and unique, Print `OK` and assign the map to that username to 1 else print (the current username)(how many times it has been input) `Example: abacaba1 or somerandomusername12`.

Worst Case Complexity: `O(n log n)`
