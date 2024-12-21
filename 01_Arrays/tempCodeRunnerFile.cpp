// find the largest element in the array.
// Example 1:
// Input:
//  arr[] = {2,5,1,3,0};
// Output:
//  5
// Explanation:
//  5 is the largest element in the array. 

// Example2:
// Input:
//  arr[] = {8,10,5,7,9};
// Output:
//  10
// Explanation:
//  10 is the largest element in the array.

#include<bits/stdc++.h>
using namespace std;

int findlargestelem(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest_elem = findlargestelem(arr);

    cout<<"The largest element is :"<<largest_elem<<endl;
}