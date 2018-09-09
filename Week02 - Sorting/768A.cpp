// C++ implementation of Comb Sort
#include<bits/stdc++.h>
using namespace std;

// To find gap between elements
int getNextGap(int gap)
{
    // Shrink gap by Shrink factor
    gap = (gap*10)/13;

    if (gap < 1)
        return 1;
    return gap;
}

// Function to sort a[0..n-1] using Comb Sort
void combSort(int a[], int n)
{
    // Initialize gap
    int gap = n;

    // Initialize swapped as true to make sure that
    // loop runs
    bool swapped = true;

    // Keep running while gap is more than 1 and last
    // iteration caused a swap
    while (gap != 1 || swapped == true)
    {
        // Find next gap
        gap = getNextGap(gap);

        // Initialize swapped as false so that we can
        // check if swap happened or not
        swapped = false;

        // Compare all elements with current gap
        for (int i=0; i<n-gap; i++)
        {
            if (a[i] > a[i+gap])
            {
                swap(a[i], a[i+gap]);
                swapped = true;
            }
        }
    }
}

int main()
{
    int n; cin >> n;//the number of stewards with Jon Snow
    int stewards[n]; //array containing stewards
    int lowestCount = 0; //this will contain the amount of lowest number in array
    int highestCount = 0; //this will contain the amount of highest number in array

    for(int i=0; i<n; i++) {
        cin >> stewards[i];
    }

    combSort(stewards, n);

    //counting lowest number count
    for(int i=0; i<n; i++) {
        if(stewards[i] == stewards[0]) {
            lowestCount++;
        } else {
            break;
        }
    }

    //counting highest number count
    for(int i=n-1; i>=0; i--) {
        if(stewards[i] == stewards[n-1]) {
            highestCount++;
        } else {
            break;
        }
    }

    cout << max(0, n-(lowestCount+highestCount)); //print the total of middle numbers
    return 0;
}
