# 433B ([Submission](https://codeforces.com/problemset/submission/433/45121121))
**Kuriyama Mirai's Stones**.\
The key to this problem is to make a cumulative sum array. So instead of making an array like this: `[3, 1, 2, 4]`, make them like this: `[3, 4, 6, 10]`. I used this technique to avoid TLE. so instead of counting the sum between range `l` until `r`, we just subtract the sum at point `r` with the sum at point `l-1` (minus one because we want to include `l` in the calculation).\
Worst Case Complexity: `O(n logn)`

# 913C ([Submission](https://codeforces.com/problemset/submission/913/45122505))
**Party Lemonade**.\
We have a selection of lemonade bottles like so:
```
i                = 1  2  3  4  5  ...
content (litres) = 1  2  4  8  16 ...
price            = $$ $$ $$ $$ $$ ...
```
Formula for the content is `2^i-1`. and the prices will be input. We want to calculate the minimum price of `lemonadeRequired`(litres) amount of lemonade. We have to find just the right combination of lemonade so that we will have the least amount of price. To do this, we have to iterate throught every price and if the price of the next (larger) bottle is less than 2 of the current (smaller) bottle, we choose the current bottle (by replacing the next bottle's price with current bottle's price times two). After that, we can start calculating the `minimumCost` (more details in the source code).\
Worst Case Complexity: `O(n)`
