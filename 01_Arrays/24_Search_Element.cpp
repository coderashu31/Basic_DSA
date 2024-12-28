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


/*
method 0: 
BRUTE FORCE:
TC: O(n)
SC: O(1)

int findIndex(const vector<int> &arr, int key){
    //find func: O(n)
    auto it = find(arr.begin(),arr.end(), key);

    //it - arr.begin()
    if(it != arr.end()){
        return it - arr.begin();
    }

    return -1;
}
*/


/*
// method 1:
// Using Hashing

int findIndex(vector<int> arr, int key){
    unordered_map<int , int > mp;

    for(int i=0; i < arr.size(); i++){
        mp[arr[i]] = i;
    }

    if(mp.find(key) != mp.end()){
        return mp[key];
    }

    return -1;
}
*/






/*
// method 2:
// binary search : can 
// Total TC: O(nlogn) (sorting) +O(logn) (binary search) =O(nlogn)


int findIndex(const vector<int> &arr, int key){
    // Sort the array O(nlog n)
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    // Binary Search: O(log n)
    int left = 0, right = sortedArr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sortedArr[mid] == key) {
            return mid;  
        } else if (sortedArr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
*/



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