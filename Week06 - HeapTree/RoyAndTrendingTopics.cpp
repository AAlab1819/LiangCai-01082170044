#include <bits/stdc++.h>

using namespace std;

struct Topic {
    int topic_id;
    long long int old_z;
    long long int new_z;
    long long int difference;
};

vector<Topic> heapify(vector<Topic> topic_list)
{
    for(int i=topic_list.size()/2; i>=0; i--) {
        int parent = i;
        int left_child = (2*i)+1;
        int right_child = (2*i)+2;
        if(left_child < topic_list.size()) {
            if(topic_list[parent].topic_id < topic_list[left_child].topic_id) {
                swap(topic_list[parent], topic_list[left_child]);
            }
        }
        if(right_child < topic_list.size()) {
            if(topic_list[parent].topic_id < topic_list[right_child].topic_id) {
                swap(topic_list[parent], topic_list[right_child]);
            }
        }
    }
    return topic_list;
}

vector<Topic> reversed_heap_sort(vector<Topic> topic_list)
{
    vector<Topic> sorted_topic;
    for(int i=0; i<topic_list.size(); i++) {
        sorted_topic.push_back(topic_list[0]);
        topic_list[0].topic_id = -1;
        topic_list = heapify(topic_list);
    }
    return sorted_topic;
}

void print_map(map <long long int,vector<Topic>,greater<long long int>> separator)
{
    for(auto it=separator.begin(); it!=separator.end(); it++) {
        cout << it->first << ": ";
        for(int i=0; i<it->second.size(); i++)
            cout << it->second[i].topic_id << " ";
        cout << endl;
    }
}

int main()
{
    map<long long int,vector<Topic>,greater<long long int>> separator; //separates topic ids based on differences
    int n; cin >> n; //amount of inputs
    int id, z, p, l, c, s; //"Topic ID, current z-score - Z, Posts - P, Likes - L, Comments - C, Shares - S" (quoted from HackerEarth)
    Topic new_topic;
    while(n--) {
        cin >> id >> z >> p >> l >> c >> s;
        new_topic.topic_id = id;
        new_topic.old_z = z;
        new_topic.new_z = (p*50LL) + (l*5LL) + (c*10LL) + (s*20LL);
        new_topic.difference = new_topic.new_z - new_topic.old_z;
        separator[new_topic.difference].push_back(new_topic);
    }

    //heapify and reverse sort each vector
    for(auto it=separator.begin(); it!=separator.end(); it++) {
        it->second = heapify(it->second);
        it->second = reversed_heap_sort(it->second);
    }

    //print top five
    int counter = 1;
    for(auto it=separator.begin(); it!=separator.end(); it++) {
        for(int i=0; i<(it->second).size(); i++) {
            cout << (it->second)[i].topic_id << " " << (it->second)[i].new_z << endl;
            if(++counter > 5) break;
        }
        if(counter > 5) break;
    }
    return 0;
}
