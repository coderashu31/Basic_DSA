// Sort an array according to the order defined by another array
// this is what relative sort means

// Example: 
// Input: 
// arr1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}      
// arr2[] = {2, 1, 8, 3}
// Output: arr1[] = {2, 2, 1, 1, 8, 8, 3, 5, 6, 7, 9}


// Input: 
// arr1[] = {4, 5, 1, 1, 3, 2}
// arr2[] = {3, 1}
// Output: arr1[] = {3, 1, 1, 2, 4, 5}


// Brute force:
#include<bits/stdc++.h>
using namespace std;

/*
//approach 1:
// Using Hashing
// TC: O(mlogm)


int relativeSort(vector<int> &arr1, vector<int> &arr2){
    int m = arr1.size();
    int n = arr2.size();
    unordered_map<int,int> freq;

    //  O(m)
    for(int i=0; i < m; i++){
        freq[arr1[i]]++ ;
    }

    int index = 0;
    //place elem of arr2 in arr1
    for(int i=0; i<n; i++){
        while(freq[arr2[i]]){
            arr1[index++] = arr2[i];
            freq[arr2[i]]--;
        }
        // why done??
        freq.erase(arr2[i]);
    }

    vector<int> remaining;
    for(auto& pair: freq){
        while(pair.second--){
            remaining.push_back(pair.first);
        }
    }

    // log m
    sort(remaining.begin(), remaining.end());

    for(int i:remaining){
        arr1[index++] = i;
    }
}

void printArray(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/

/*
The question can also be done using custom operator:

https://www.geeksforgeeks.org/sort-array-according-order-defined-another-array/
*/



int main(){
    vector<int> arr1 = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    vector<int> arr2 = {2, 1, 8, 3};

    relativeSort(arr1, arr2);
    printArray(arr1);

    return 0;
}


