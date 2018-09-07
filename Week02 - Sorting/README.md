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

To solve this problem, I used struct node to avoid C++ [MAP](http://www.cplusplus.com/reference/map/map/)'s auto-sorting.\
Every dragon has 2 attributes: `strength_requirement` and `strength_reward`.\
I modified the shell sort to fulfill my needs. Instead of making the argument of my shell sort function to accept integer arrays, I changed it so that it accepts an array of `dragon`s. I sort the dragons based on the smallest `strength_requirement`.\
After sorting, I iterate through the array and if by some circumstances Kirito can't move forward because the accumulated strength is still less or equal than the needed strength to proceed, ouput `NO` by assigning `false` to the variable `next_level_possible` and break the loop.\
If Kirito managed to go through all dragons, output `YES`.

# 768A ([Submission](https://codeforces.com/contest/768/submission/42602181))
Sorting Method Used: `Bucket Sort`\
Bucket Sort is similar to Counting Sort. However, the difference between the two is that in Bucket Sort, you have to sort every 'bucket' first before concatenate all of the elements into the final array.\
In Bucket Sort, we seperate our buckets based on a range, not the number itself. This is the main difference between Bucket Sort and Counting Sort.

The solution to this problem is to sort the `stewards` and count how many lowest number duplicates and how many highest number duplicates that is in the array.\
After we get the amount of those duplicates, all other elements of the array should have an element that is lesser and an element that is greater.\
Output the amount of stewards subtracted by the some of the duplicates. This will give you the answer.
