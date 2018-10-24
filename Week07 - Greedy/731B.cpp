#include <bits/stdc++.h>

using namespace std;

int main()
{
    int training_session; cin >> training_session;
    int input, pizza_needed(0);
    for(int i=0; i<training_session; i++) {
        cin >> input;
        if(input%2==1) {
            if(++pizza_needed==2) pizza_needed = 0;
        }
        if(input==0 || i==training_session-1) {
            if(pizza_needed>0) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}