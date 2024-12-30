// Average of all the elements in the array

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 3
// Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.

// Example 2:
// Input:  N=6, array[] = {1,2,1,1,5,1}
// Output: 1.8
// Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+1+1+5+1)/6 = 1.8



#include<bits/stdc++.h>
using namespace std;

double findavg(vector<int> &arr){
    int n = arr.size();
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    double avg = sum / n;
    return avg;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    cout<<"The avg of elements is: ";
    cout<< findavg(arr);
    return 0;
}
