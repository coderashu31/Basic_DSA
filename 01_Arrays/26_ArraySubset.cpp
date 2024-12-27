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

/*
optimised method: 
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

bool issubset()


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

