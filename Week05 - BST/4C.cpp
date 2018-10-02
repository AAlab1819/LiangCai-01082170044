#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> name_list;
    int n; cin>>n; //amount of inputs
    string username;
    for(int i=0; i<n; i++) {
        cin >> username;
        if(name_list[username]==0) {
            cout << "OK" << endl;
            name_list[username]++;
        } else {
            cout << username + to_string(name_list[username]++) << endl;
        }
    }
    return 0;
}
