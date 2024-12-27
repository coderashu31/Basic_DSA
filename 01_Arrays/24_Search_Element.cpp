// Example 1:
// Input: array[] = {1,2,3,4,5} k=3                     
// Output:2
// Explanation: The answer is 2 because 3 is present at 2nd index.

// Example 2:
// Input: array[]={6,7,9,5,3,10} k=10
// Output: 5
// Explanation: The answer is 5 because 10 is present at 5th index.


#include<bits/stdc++.h>
using namespace std;

int findIndex(const vector<int> &arr, int key){
    auto it = find(arr.begin(),arr.end(), key);

    if(it != arr.end()){
        return it - arr.begin();
    }

    return -1;
}

int main(){
    vector<int> arr = {1,3,4,5,2};
    int n = arr.size();
    int key = 5;

    int index = findIndex(arr, key);

    if (index != -1){
        cout<<"Element "<< key << " is found at index: "<< index << endl;
    } else {
        cout<<"Element "<< key << " is not found "<< endl;
    }
    return 0;
}