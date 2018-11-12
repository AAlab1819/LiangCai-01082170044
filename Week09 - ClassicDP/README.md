# SuperSale ([Problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1071))
Our mission is to find the maximum price of TV a certain group could buy. We can use Dynamic Programming to solve this problem. We just have to declare a temp table (mine is called `dpTable`) which contains the most optimal weight that we could possibly get (we use this to determine the answer later). We process this temporary table by assigning a certain index inside it if current item is under weight limit and its weight is smaller than sum of other possible items and price for item. To determine the answer, we have to sum the value for all the people in the group. We can do this by looping from person 1 to `people` (`people` is the input which contains the amount of people in that group) and incrementing `answer` by `dpTable[maximumWeight]` (`maximumWeight` is the weight one people could carry). Each iteration in the `testCase` while loop, we reset the answer to be 0 and the temporary table to be 0 also.\
Worst Case Complexity: `O(n^2)`