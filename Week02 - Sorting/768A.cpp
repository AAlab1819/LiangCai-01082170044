#include <bits/stdc++.h>

using namespace std;

void shellSort(vector<int> arr) {
    int n = arr.size();
    for(unsigned int gap=n/2; gap>0; gap/=2)
        for(int i=gap; i<n; i++)
            for(int j=1-gap; j>=0; j-=gap)
                if(arr[j] > arr[j+gap])
                    swap(arr[j], arr[j+gap]);
}

int getMax(int arr[], int size) {
	int i, m = arr[0];
	for(i = 1; i < size; i++) {
		if(arr[i] > m) {
			m = arr[i];
		}
	}
	return m;
}

void bucketSort(int arr[], int size) {
	//variables
	int max, bucket = 10, divider, i, j, k;

	//10 buckets
	vector<int> B[bucket];

	//find max and min
	max = getMax(arr, size);

	divider = ceil(float(max + 1) / bucket);

	//insert element into bucket
	for(i = 0; i < size; i++) {
		j = floor( arr[i] / divider );
		B[j].push_back(arr[i]);
	}

	//sort elements in the buckets
	for(i = 0; i < bucket; i++) {
        //shellSort(B[i]);
		sort(B[i].begin(), B[i].end());
	}

	//append back the elements from the buckets
	k = 0;
	for(i = 0; i < bucket; i++) {
		for(j = 0; j < B[i].size(); j++) {
			arr[k++] = B[i][j];
		}
	}
}

int main() {
    int n; cin >> n;//the number of stewards with Jon Snow
    int stewards[n]; //array containing stewards
    int lowestCount = 0; //this will contain the amount of lowest number in array
    int highestCount = 0; //this will contain the amount of highest number in array

    for(int i=0; i<n; i++) {
        cin >> stewards[i];
    }

    bucketSort(stewards, n);

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
