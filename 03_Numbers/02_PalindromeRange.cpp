// Find all Palindrome Numbers in a given range

// Example 1:
// Input: min = 10 , max = 50
// Output: 11 22 33 44 
// Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

// Example2:
// Input: min = 100 , max = 150
// Output: 101 111 121 131 141 
// Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.


#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int n){
    int temp = n;
    int rev = 0;
    while (temp > 0){
        rev = rev*10 + temp%10;
        temp /= 10;
    }

    if (n == rev){
        return true;
    } else { 
        return false;
    }
}

int main(){
    int min = 10;
    int max = 50;

    bool found = false;
    for(int i = min ; i <= max ; i++){
        if (ispalindrome(i)){
            cout<< i << " ";
            found = true;
        } 
    }

    if(!found){
        cout<< "Not a palindrome number ";
    }

    return 0;
}

