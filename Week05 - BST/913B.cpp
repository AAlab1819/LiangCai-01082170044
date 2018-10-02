#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, vector<int>> tree;
    int n; cin>>n; //"the number of vertices in the tree"
    int current_number;
    int leaf_count;
    for(int i=2; i<=n; i++) {
        cin>>current_number;
        tree[current_number].push_back(i);
    }
    for(unsigned int i=1; i<tree.size(); i++) {
        leaf_count = 0;
        if(tree[i].size()==0) continue; //it's a leaf man
        for(unsigned int j=0; j<tree[i].size(); j++) {
            if(tree[tree[i][j]].size()==0) {
                leaf_count++;
            }
        }
        if(leaf_count<3) {
            cout << "No"; return 0;
        }
    }
    cout << (n==3 ? "No" : "Yes");
    return 0;
}
