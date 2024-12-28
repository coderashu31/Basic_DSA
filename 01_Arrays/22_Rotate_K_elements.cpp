// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

// Examples:

// Example 1:
// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5
// Explanation: array is rotated to right by 2 position .

// Example 2:
// Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
// Output: 9 10 11 3 7 8
// Explanation: Array is rotated to right by 3 position.




//BRUTE FORCE
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rotate_toright(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k >= n

    vector<int> temp(n);

    // Copy the last k elements of arr into the first k positions of temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the first (n - k) elements of arr into temp
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    // Update the original array with the rotated values
    arr = temp;
}

int main() {
    vector<int> arr = {3, 7, 8, 9, 10, 11};
    int k = 2;

    rotate_toright(arr, k);

    cout << "After Rotating the elements to right: " << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
