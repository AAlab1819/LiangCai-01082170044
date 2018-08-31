# 912A ([Submission](http://codeforces.com/contest/912/submission/42264163))

Explanation is quite simple:\
Yellow = y;\
Blue = b;\
To make yellow ball = 2y;\
To make green ball = y + b;\
To make blue ball = 3b;

**Test Case (to make explanation easier)**\
Yellow Crystal Possessed = 4;\
Blue Crystal Possessed = 3\
Needed:\
Yellow Ball: 2\
Green Ball: 1\
Blue Ball: 1\
Therefore, you need (Required Crystals):\
Yellow Crystal Required = 2*(amount of yellow ball needed) + (amount of green ball needed)\
Blue Crystal Required = 3*(amount of blue ball needed) + (amount of green ball needed)\
Why? - refer to the formula of the balls above.\
Ouput the total of needed crystals:\
(Note: If total needed crystals < 0, total needed crystals = 0)\
Total needed crystals = (Yellow Crystals Required - Yellow Crystals Possessed) + (Blue Crystals Required - Blue Crystals Possessed)

# 988A ([Submission](http://codeforces.com/contest/988/submission/42293658))

First make a map to insert unique numbers\

| Numbers          | Positions(i+1)  |
| :-------------:  | :-------------: |
| 15               | 5               |
| 12               | 1               |
| 3                | 2               |\

IF the amount of distinct numbers is less than the amount needed to make a team, Output: "NO" (without quotes)\
ELSE Output: "YES" (without quotes) and print the positions of the distinct numbers using iterator.\
How? - Using for loop.\
```cpp
auto it = counter.begin();
for(int i=0; i<k; i++) {
    cout << it->second << " "; //prints the position of the distinct number(s)
    it++;
}
```

# 854A ([Submission](http://codeforces.com/contest/854/submission/42294423))

A proper fraction of a/b is when a<b and both cannot be divided by a common factor.\
First we input n, the maximum amount of (numerator+denominator).\
If n is an odd number, then assigning numerator to n/2 and its denominator to n/2+1 is enough to make them proper immideately.\
However, if n is an even number, we should keep them proper by checking the factor of the numerator and comparing it to denominator's factors at the same time.\
if, say, 'x' is a common factor, decrement the numerator and increment the denominator.\
Output: the numerator and denominator seperated by a space.
