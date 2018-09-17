# 492B ([Submission](https://codeforces.com/contest/492/submission/42827282))
Vanya and Lantern. Basically you just have to sort the locations and print out the highest distance between (0 to the first lantern), (`highest_gap`/2) and (last lantern to the end of the street).

Worst Case: O(n log n)\
Average Case: θ(n)\
Best Case: Ω(n)

# 148A ([Submission](https://codeforces.com/contest/148/submission/42824649))
Insomnia Cure. Make a variable to count the damaged dragons (`damaged`) and loop from 1 to the number of dragons. There are four variables as described in the problem: `k`, `l`, `m`, `n`. if the current number in loop is divisible by `k` or `l` or `m`  or `n`, increment `damaged`. Print `damaged` when done looping.

Worst Case: O(n)\
Average Case: θ(n)\
Best Case: Ω(n)

# 469A ([Submission](https://codeforces.com/contest/469/submission/42824193))
I Wanna be the Guy. Input the levels that could be done by `little_x` and `little_y` in an array. Combine those arrays, and delete the duplicates.
if the size of the "non-duplicating" array is less than the number of levels (`final_lvl`) then it's a 'Oh, my keyboard!' else, if the last number in the sorted, non-duplicating number is less than the `final_lvl` then it's a 'Oh, my keyboard!' else, it's a 'I become the guy.'.

Worst Case: O(n)\
Average Case: θ(n)\
Best Case: Ω(n)
