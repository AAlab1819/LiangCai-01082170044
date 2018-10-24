# 946A ([Submission](https://codeforces.com/problemset/submission/946/44760181))
**Partition**.\
Print the sum of the array. Be sure to make each element absolute.\
Worst Case Complexity: `O(n)`

# 978B ([Submission](https://codeforces.com/problemset/submission/978/44760581))
**File Name**.\
Linear scan through the string, if x is longer than 2, increment the answer by one each time there is an x next to the continuous two.
```
input:          xxxxi
scan posistion: ^
x_counter: 1
answer: 0

input:          xxxxi
scan posistion:  ^
x_counter: 2
answer: 0

input:          xxxxi
scan posistion:   ^
x_counter: 3
answer: 1

input:          xxxxi
scan posistion:    ^
x_counter: 4
answer: 2

input:          xxxxi
scan posistion:     ^
x_counter: 0
answer: 2
```
Worst Case Complexity: `O(n)`

# 731B ([Submission](https://codeforces.com/contest/731/submission/44468347))
**Coupons and Discounts**.\
Make sure every odd number has a pair (different number, but both are odd). If there is an odd number without a pair, print `NO` else print `YES`. Also, when you encounter an odd number, that means you have to get at least one extra pizza from the upcoming day. For example, when you have an input to be like `3 2 2 2 0` that's a `NO` because you still have to get at least 1 more odd number before `0` to balance out the `3`. So, a `YES` sequence of number would be like: `3 2 3 0` or `3 5 2 0`).
```
Input:
6
3 5 2 0 3 1
Output:
YES
Explanation:
Odd numbers has a pair and there is not any 0 after an odd number.

Input:
4
1 3 1 2
Output:
NO
Explanation:
There is an odd number without pair.

Input:
3
1 0 1
Output:
NO
Explanation:
You can't complete the 1-1 combo on the second day.
```
Worst Case Complexity: `O(n)`
