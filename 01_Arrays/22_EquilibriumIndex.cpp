// Problem Statement: Finding Equilibrium index in an array

// Example 1:
// Input: nums = [2,3,-1,8,4]
// Output: 3
// Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
// The sum of the numbers after index 3 is: 4 = 4

// Example 2:
// Input: nums = [1,-1,4]
// Output: 2
// Explanation: The sum of the numbers before index 2 is: 1 + -1 = 0
// The sum of the numbers after index 2 is: 0

// Brute force:
#include<bits/stdc++>
using namespace std;

void findIndex(vector<int> &arr,i){
    for(int i=0 ;i<arr.size() ; i++){
        cin>>arr[i];
    }


}

int main(){
    int n = 5;
    vector<int> arr = {2,3,-1,8,4};
    int equilibriumidx = findEquilibriumIdx(arr, n);
    cout << equilibriumidx << endl;
    return 0;
}