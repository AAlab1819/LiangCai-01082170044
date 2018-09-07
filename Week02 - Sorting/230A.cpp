#include <bits/stdc++.h>

using namespace std;

struct dragon {
    int strength_requirement;
    int strength_reward;
};

void shellSort(dragon arr[], int n)
{
    for(int gap=n/2; gap>0; gap/=2)
        for(int i=gap; i<n; i++)
            for(int j=i-gap; j>=0; j-=gap)
                if( arr[j].strength_requirement > arr[j+gap].strength_requirement )
                    swap(arr[j], arr[j+gap]);
}

int main()
{
    int s, n; cin >> s >> n; //Kirito's str and amount of dragons
    dragon dragons[n]; //store dragons
    bool next_level_possible = true;

    for(int i=0; i<n; i++) {
        cin >> dragons[i].strength_requirement >> dragons[i].strength_reward;
    }

    shellSort(dragons, n);

    //debug
    /*for(int i=0; i<n; i++) {
        cout << dragons[i].strength_requirement << " " << dragons[i].strength_reward << endl;
    }*/

    for(int i=0; i<n; i++) {
        if(s > dragons[i].strength_requirement) {
            s += dragons[i].strength_reward;
        } else {
            next_level_possible = false;
            break;
        }
    }
    cout << (next_level_possible ? "YES" : "NO");
    return 0;
}
