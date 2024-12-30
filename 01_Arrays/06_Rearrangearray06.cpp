// Rearrange array in increasing-decreasing order

// Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

// Examples:

// Example 1:
// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7
// Explanation: First three elements are in the ascending order and next three elements are in the descending order.

// Example 2:
// Input: 4 2 8 6 15 5 9 20
// Output: 2 4 5 6 20 15 9 8

/*

// BRUTE FORCE:
// O(m)+O(mlogm)

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {8, 7, 1, 6, 5, 9};
    int m = arr.size();
    sort(arr.begin() , arr.end());
    for(int i=0; i < m/2; i++ ){
        cout<< arr[i] << " ";
    }
    for(int i=m-1; i >= m/2; i-- ){
        cout<< arr[i] << " ";
    }
}

*/


// OPTIMISED CODE:
// ??