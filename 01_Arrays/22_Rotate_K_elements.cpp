// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

// Examples
// Example 1:
// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5
// Explanation: array is rotated to right by 2 position .

// Example 2:
// Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
// Output: 9 10 11 3 7 8
// Explanation: Array is rotated to right by 3 position.




//BRUTE FORCE
/*
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rotate_toleft(vector<int> &arr, int k){
    int n = arr.size();
    k = k % n;
    int temp[k];

    if(n == 0){
        return;
    }

    if (k > n){
        return;
    }

    for(int i = 0; i < k ;i++ ){
        temp[i] = arr[i];
    }

    for(int i = 0; i< n-k ; i++ ){
        arr[i] = arr[i+k];
    }
    for (int i = n-k; i< n; i++){
        arr[i] = temp[i - n + k];
    }
}

void rotate_toright(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n; 

    vector<int> temp(n);
    
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }
    arr = temp;
}


int main() {
    vector<int> arr = {3, 7, 8, 9, 10, 11};
    int k = 8;

    rotate_toright(arr, k);

    cout << "After Rotating the elements to right: " << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


*/


// After Rotating 2 elements to the left: 3 4 5 6 7 1 2 
// After Rotating 2 elements to the right: 6 7 1 2 3 4 5

#include <iostream>
#include <vector>
using namespace std;


void RotateeletoLeft(vector<int> &arr, int k)
{
  k = k % arr.size(); 
  vector<int> temp(arr.begin(), arr.begin() + k);
  arr.erase(arr.begin(), arr.begin() + k);       
  arr.insert(arr.end(), temp.begin(), temp.end()); 
}


void RotateeletoRight(vector<int> &arr, int k)
{
  k = k % arr.size(); 
  vector<int> temp(arr.end() - k, arr.end()); 
  arr.erase(arr.end() - k, arr.end());      
  arr.insert(arr.begin(), temp.begin(), temp.end()); 
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int k = 2; 

  // Perform left rotation
  vector<int> leftArr = arr; 
  RotateeletoLeft(leftArr, k);
  cout << "After Rotating " << k << " elements to the left: ";
  for (int val : leftArr)
    cout << val << " ";
  cout << endl;

  // Perform right rotation
  vector<int> rightArr = arr; 
  RotateeletoRight(rightArr, k);
  cout << "After Rotating " << k << " elements to the right: ";
  for (int val : rightArr)
    cout << val << " ";
  cout << endl;

  return 0;
}
