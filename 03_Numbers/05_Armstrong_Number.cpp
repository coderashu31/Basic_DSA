// Check if a number is Armstrong Number or not
// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

// Example 1:
// Input:N = 153
// Output:True
// Explanation: 13+53+33 = 1 + 125 + 27 = 153

// Example 2:
// Input:N = 371
// Output: True
// Explanation: 33+53+13 = 27 + 343 + 1 = 371

#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int num){
    int k = to_string(num).length();
    
    int sum = 0;
    int n = num;

    while(n>0){
        int ld = n % 10;
        sum += pow(ld,k);
        n /= 10;
    }

    return sum == num ? true:false;
}

int main(){
    int num = 153;
    if(isArmstrong(num)){
        cout<< num << " is an Armstrong number."<< endl;
    } else {
        cout<< num << " is not an Armstrong number."<< endl;
    }
    return 0;
}