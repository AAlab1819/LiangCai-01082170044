#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; //number of people
    int k; cin >> k; //team comp
    map<int, int> counter; //contains <int(number), int(position)>

    for(int i=0; i<n; i++) {
        int t; //current number
        cin >> t;
        auto it = counter.find(t);
        if(it == counter.end()) { //if the map does not contain the current number
            counter.insert(pair<int,int>(t,i+1)); //t = current input number || i+1 = current position (not index)
        }
    }

    if(counter.size()<k) { //if the amount of distinct number(s) is/are less than the size needed to make the team
        cout << "NO";
    } else {
        cout << "YES\n";
        auto it = counter.begin();
        for(int i=0; i<k; i++) {
            cout << it->second << " "; //prints the position of the distinct number(s)
            it++;
        }
    }

    return 0;
}
