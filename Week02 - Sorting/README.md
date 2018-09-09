# 291A ([Submission](https://codeforces.com/contest/291/submission/42598184))
Sotring Method Used: `Pancake Sort`\
Pancake Sort is a sorting method that take the highest number from an array, swap that highest number to index `0` and flip the array.\
This 'flipping' will make the highest number go to the end of the array (which is correct).

Now, let's explore the problem solving side of this problem.\
I basically checked whether there are non-zero triplets `(1 1 1)` or `(3 3 3)` in the array.\
If there is a non-zero triplet, output `-1` by assigning `-1` to `ongoing_calls` (for more information look at my submission code) and breaking the loop.\
If there is none, the loops continues and for every pair found, increment `ongoing_calls` by one.\
Finally, output `ongoing_calls`

# 230A ([Submission](https://codeforces.com/problemset/submission/230/42599680))
Sorting Method Used: `Shell Sort`\
Shell sort is an interesting sorting method that implements the usage of 'gap'\
Gap is the distance between to elements in the array that we want to compare. Sorting is complete when gap is equal to zero.\
If say the element that has the lesser index is greater than the one that has greater index, swap those two elements.

To solve this problem, I used `struct` to avoid C++ [MAP](http://www.cplusplus.com/reference/map/map/)'s auto-sorting.\
Every dragon has 2 attributes: `strength_requirement` and `strength_reward`.\
I modified the shell sort to fulfill my needs. Instead of making the argument of my shell sort function to accept integer arrays, I changed it so that it accepts an array of `dragon`s. I sort the dragons based on the smallest `strength_requirement`.\
After sorting, I looped through the array and if by some circumstances Kirito can't move forward because the accumulated strength is still less or equal than the needed strength to proceed, output `NO` by assigning `false` to the variable `next_level_possible` and break the loop.\
If Kirito managed to go through all dragons, output `YES`.

# 768A ([Submission](https://codeforces.com/contest/768/submission/42694787))
Sorting Method Used: `Comb Sort`\
Comb Sort in similar to Bubble Sort.\
The only difference is that instead of going through the array and compare the numbers one at a time, we compare the numbers with a 'gap'. We determine the gap by dividing the size of the array we want to sort by `1.3`. Then, we compare those two number.\
For example: If we have an array with the size of 10, then the gap is `int(10/1.3)` which is 7. So, we compare index 0 and index 7. Then we continue to compare index 1 and 8, and so on. After we hit the end (comparing index 2 and 9), we then continue to divide the current gap (7) by 1.3 and repeat the whole process until there is no more swapping or until the gap is equal to one.

The solution to this problem is to sort the `stewards` and count how many `lowest number duplicates` and how many `highest number duplicates` that is in the array.\
After we get the amount of those duplicates and exclude (figuratively) them from the array, all other elements of the array should have an element that is lesser (which is the lowest number) and an element that is greater (which is the highest number).\
Output the amount of `stewards` subtracted by the sum of the duplicates. This will give you the answer.
