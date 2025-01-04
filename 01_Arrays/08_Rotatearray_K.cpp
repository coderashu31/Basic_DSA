// Rotate array by K elements : Block Swap Algorithm
// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5} K=2
// Output: {3,4,5,1,2}
// Explanation: Rotate the array to right by 2 elements.

// Example 2:
// Input: N = 7, array[] = {1,2,3,4,5,6,7} K=3
// Output: {4,5,6,7,1,2,3}
// Explanation: Rotate the array to right by 3 elements.


// Left Rotation
#include <bits/stdc++.h>
using namespace std;

void BlockSwap(int arr[], int k, int n){  
  vector<int> temp(n);
  k = k % n;

  for(int i=0; i<n; i++){
    temp[i] = arr[(i + k) % n];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = temp[i];
  }
}


/*
// right rotation

void rightRotate(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n

    // Step 1: Reverse the entire array
    reverse(arr, arr + n);

    // Step 2: Reverse the first k elements
    reverse(arr, arr + k);

    // Step 3: Reverse the remaining n-k elements
    reverse(arr + k, arr + n);
}
*/



int main()
{
  int arr[] = {1,2,3,4,5};
  int n = 5;
  int k = 2;
  BlockSwap(arr, k, n);
  cout << "After Rotating the array " << endl;
  for (int i = 0; i < n; i++)
  cout << arr[i] << " ";
  return 0;
}