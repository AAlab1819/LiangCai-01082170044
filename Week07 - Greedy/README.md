# 946A ([Submission](https://codeforces.com/problemset/submission/946/44760181))
**Partition**.\
Print the sum of the array. Be sure to make each element absolute.\
Worst Case Complexity: `O(n)`

# 978A ([Submission](https://codeforces.com/problemset/submission/978/44760581))
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

# 731A ([Submission](https://codeforces.com/contest/731/submission/44468347))
**Coupons and Discounts**.\
Make sure every odd number has a pair (different number, but both are odd). If there is an odd number without a pair, print `NO` else print `YES`. If there is a 0 after an odd number, print `NO` also. This is because you can't use the `1-1` combo with the next day.
```
Input:
4
1 3 1 2
Output:
YES
Explanation:
On the second day, you can buy the 2 pizza combo and complete the 1-1 combo from the day before.

Input:
3
1 0 1
Output:
NO
Explanation:
You can't complete the 1-1 combo on the second day.
```
Worst Case Complexity: `O(n)`
