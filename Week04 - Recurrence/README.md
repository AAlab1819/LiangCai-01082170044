# 598D ([Submission](https://codeforces.com/contest/598/submission/43358197))
**Igor In the Museum**. Read about flood fill algorithm and use it.\
To evade TLE, we must have an array which contains the `answerIndex` (we will use this to take out the answer from the `answer` array later) I call this array as `answerIndexMap`. This array has the same dimension with `symbol` array which is the map of the museum. After we make these arrays, we can then start flood filling each room in the museum map (`symbol`) and assign that room's location in `answerIndexMap` to a number (for refernce when calling `answer` array).
```
==============\
Illustration: |
==============/

----------------------
Before flood filling |
----------------------
[symbol] array:
* * * *
* . . *
* . . *
* * * *

[answerIndexMap] array:
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0

[answer] array:
0 0 0 0 0 0 0 0 0 0 0 ....

---------------------
After flood filling |
---------------------
[symbol] array:
* * * *
* . . *
* . . *
* * * *

[answerIndexMap] array:
0 0 0 0
0 1 1 0
0 1 1 0
0 0 0 0

[answer] array:
0 8 0 0 0 0 0 0 0 0 0 ....
  ^ will be used when (for example) answerIndexMap[1][1] is called.
```
For test cases, a value of `x` and `y` will be input. Output the value of `answer` with the index of `answerIndexMap[--y][--x]`. Or in other words `answer[answerIndexMap[--y][--x]]`.

# 268B ([Submission](https://codeforces.com/contest/268/submission/43358783))
**Buttons**. You just have to for loop from 1 to the amount of buttons `n`. Every cycle, increment `answer` by the current cycle number `i` multiplied by the result of the amount of buttons `n` subtracted by the current cycle number `i` (note that `n-i` cannot be 0 so, handle it with `max()` or ternary operation. The result of this calculation will give you the answer.\
This formula will look like this: `ans += i * (n*i if n*i>0 else 1) #in python`.\
You can find out the pattern by yourelf if you are really ambitious. I am here only to explain my thought process.
```
==============\
Illustration: |
==============/

------------
4 Buttons: |
------------
n = 4,
LOOP (i=1; i<=n; i++):
  #formula: answer += (i * ( max(n*i, 1) ))
  #i = 1
  answer = answer + (1 * ( max(4-1, 1) ))   -> 3, answer = 3
  #i = 2
  answer = answer + (2 * ( max(4-2, 1) ))   -> 4, answer = 7
  #i = 3
  answer = answer + (3 * ( max(4-3, 1) ))   -> 3, answer = 10
  #i = 4
  answer = answer + (4 * ( max(4-4, 1) ))   -> 4, answer = 14
END LOOP
OUTPUT: answer

Why this pattern?
Because,

  4 Buttons:
  1 * 3 = 3   ->    Calculation #1
  2 * 2 = 4   ->    Calculation #2
  3 * 1 = 3   ->    Calculation #3
  4 * 1 = 4   ->    Calculation #4
  _________ +
         14
         
See the patern where every calculation's sum is equal to 4 (i * n-i) except the last one
so, we have to uses max() or ternary (becacuse at the last cycle in loop i will be equal to n and i-n is zero).
```
