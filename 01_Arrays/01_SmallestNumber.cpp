// Problem Statement: Given an array, we have to find the smallest element in the array.

// Examples:
// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 0
// Explanation: 0 is the smallest element in the array. 

// Example2: 
// Input: arr[] = {8,10,5,7,9};
// Output: 5
// Explanation: 5 is the smallest element in the array




#include<bits/stdc++.h>
using namespace std;

//method 1: find the min and return. 
//tc:  O(n log n) 

// int findSmallestElement(vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }


// Optimised method 2: 
// tc: O(1)
int findSmallestElement(vector<int> &arr){
    int mini = arr[0];

    for(int i=1;i<arr.size();i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n); // Declare a vector of size n

    // Take input for each element
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = findSmallestElement(arr);

    cout << "The smallest element of the array is: " << smallest << endl;

    return 0;

}