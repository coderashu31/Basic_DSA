// Count frequency of each element in the array

// Example 1:
// Input: arr[] = {10,5,10,15,10,5};
// Output: 10 3 5 2 15 1
// Explanation: 10 occurs 3 times in the array 5 occurs 2 times in the array 15 occurs 1 time in the array

// Example2: 
// Input: arr[] = {2,2,3,4,4,2};
// Output: 2 3 3 1 4 2
// Explanation: 2 occurs 3 times in the array 3 occurs 1 time in the array 4 occurs 2 time in the array


#include <bits/stdc++.h>
using namespace std;

/*



// BRUTE FORCE:
// Time Complexity: O(N*N)
// Space Complexity:  O(N)

void countFreq(int arr[],int n){
    vector<bool> visited(n,false);

    for(int i=0;i<n;i++){
        if(visited[i]){
            continue;
        }
    }

    int count = 1;
    // compare with j=i+1
    for(int j = i+1;)
}

*/


void countFreq(int arr[], int n) {
    unordered_map<int, int> map; 
    vector<int> order;          
   
    for (int i = 0; i < n; i++) {
        if (map.find(arr[i]) == map.end()) {
            order.push_back(arr[i]); 
        }
        map[arr[i]]++;
    }

    for (int elem : order) {
        cout << elem << " " << map[elem] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}