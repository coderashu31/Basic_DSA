// Check if array is subset of another array

// Example 1:
// Input: arr1[]= [1,3,4,5,2]
//        arr2[]= [2,4,3,1,7,5,15]
// Output: arr1[] is a subset of arr2[]

// Example 2:
// Input: arr1[]= [1,3,4,5,2]
//        arr2[]= [4,5,2]
// Output: arr1[] is not a subset of arr2[]

// Example 3:
// Input: arr1[]= [1,3,4,5,2]
//        arr2[]= [11,12,13,15,16]
// Output: arr1[] is not a subset of arr2[]


#include<bits/stdc++.h>
using namespace std;


//method 0:
// using simple NESTED for loops
bool issubset(vector<int> &arr1, vector<int> &arr2) {
    for (int i = 0; i < arr1.size(); i++) {
        bool found = false;
        for (int j = 0; j < arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;  
            }
        }

        if (!found) {
            return false;
        }
    }
    return true;
}

/*
// method 1:
//using Binary Search
// O(nlogn+mlogn)

// O(mlogn)
bool binarySearch(const vector<int> &arr, int key) {
    int left = 0, right = arr.size() - 1;
    
    while (left <= right) {  
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return true;  
        }
        else if (arr[mid] < key) {
            left = mid + 1;  
        } else {
            right = mid - 1;  
        }
    }
    return false;  
}

bool issubset(vector<int> &arr1, vector<int> &arr2){
    vector<int> sorted_arr2 = arr2;
    // O(nlogn)
    sort(sorted_arr2.begin(),sorted_arr2.end());

    for(int x:arr1){
        if(!binarySearch(sorted_arr2,x)){
            return false;
        }
    }
    return true;
}
*/



/*
method 2:
optimised method: 
// TC:  O(n)+O(m)=O(n+m)
// Constructing the unordered set: O(n)
// Searching for each element of arr1: O(m)

bool issubset(vector<int> &arr1 , vector<int> &arr2){

    //store elements of arr2 because searching in an unordered set is O(1) on average.
    unordered_set<int> s(arr2.begin(),arr2.end());


    //checking if the element exist in the set
    for(int x: arr1){
        if(s.find(x) == s.end()){
            return false;
        }
    }

    return true;
}
*/


int main(){
    vector<int> arr1 = {1,3,4,5,2};
    vector<int> arr2 = {2,4,3,1,7,5,15};

    bool ans = issubset(arr1,arr2);
    if (ans == true){
        cout<<"arr1 is subset of arr2";
    }
    else cout<<"arr1 is not a subset of arr2";
    
    return 0;
}

