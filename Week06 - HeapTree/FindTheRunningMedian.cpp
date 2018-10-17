#include <bits/stdc++.h>

using namespace std;

vector<int> heapify(vector<int> num_list)
{
    for(int i=num_list.size()/2; i>=0; i--) {
        int parent = i;
        int left_child = (2*i)+1;
        int right_child = (2*i)+2;
        if(left_child < num_list.size()) {
            if(num_list[parent] < num_list[left_child]) {
                swap(num_list[parent], num_list[left_child]);
            }
        }
        if(right_child < num_list.size()) {
            if(num_list[parent] < num_list[right_child]) {
                swap(num_list[parent], num_list[right_child]);
            }
        }
    }
    return num_list;
}

void print_arr(vector<int> num_list)
{
    cout << "Current Array: ";
    for(int i=0; i<num_list.size(); i++) cout << num_list[i] << " ";
    cout << endl;
}

void find_median(vector<int> num_list)
{
    //print_arr(num_list);
    cout << setprecision(1) << fixed;
    if(num_list.size()%2==1) {
        if(num_list.size()==1) cout << num_list[0]/1.0 << endl;
        else cout << num_list[num_list.size()/2]/1.0 << endl;
    } else {
        cout << (num_list[num_list.size()/2]+num_list[num_list.size()/2-1])/2.0 << endl;
    }
}

vector<int> heap_sort(vector<int> num_list)
{
    int temp_arr[num_list.size()];
    vector<int> sorted_list;
    for(int i=0; i<num_list.size(); i++) {
        temp_arr[(num_list.size()-1)-i] = num_list[0]; //fill the array from the back
        num_list[0] = -1;
        num_list = heapify(num_list);
    }
    for(int i=0; i<num_list.size(); i++) {
        sorted_list.push_back(temp_arr[i]); //populate the vector
    }
    //print_arr(sorted_list);
    return sorted_list;
}

int main()
{
    vector<int> num_list;
    vector<int> median_list;
    int n; cin >> n; //number of inputs
    int input; //to input vector
    for(int i=0; i<n; i++) {
        cin >> input;
        num_list.push_back(input);
        num_list = heapify(num_list);
        median_list = heap_sort(num_list);
        find_median(median_list);
    }
    return 0;
}
