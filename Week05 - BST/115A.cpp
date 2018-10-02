#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> employees; //lists employees with his/her corresponding superior or manager
    int n; cin >> n; //"The first line contains integer n (1 <= n <=2000) - the number of employees."
    int current_superior;
    int max_depth = 1; //The deepest level = the answer
    for(int i=1; i<=n; i++) {
        cin >> current_superior;
        employees[i] = current_superior;
    }
    for(int i=1; i<=n; i++) {
        if(employees[i] == -1)
            continue;
        else {
            int superior = employees[i];
            int current_depth = 1;
            while(superior != -1) {
                superior = employees[superior];
                current_depth++;
            }
            max_depth = current_depth > max_depth ? current_depth : max_depth; //current_depth more than max_depth? (if yes) max_depth = current_depth : (else)max_depth = max_depth
        }
    }
    cout << max_depth;
    return 0;
}
