// Check whether a number is Perfect Number or not

// A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 

// Example 1:
// Input: n=6
// Output: 6 is a perfect number

// Example 2:
// Input: n=15
// Output: 15 is not a perfect number

// Example 3:
// Input: n=28
// Output: 28 is a perfect number
// Reason:
// For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.

#include<bits/stdc++.h>
using namespace std;

bool perfect_num(int num){
    int sum = 0;
    for(int i=1; i<num ; i++){
        if(num % i == 0){
            sum += i;
        }   
    }
    // return sum == num;
    if (sum == num)
        return true;
    else 
        return false;
}

int main(){
    int num = 28;
    
    if (perfect_num(num)){
        cout<< num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}