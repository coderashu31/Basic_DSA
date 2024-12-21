// Problem Statement: Convert decimal to binary number.

// Examples:

// Example 1:
// Input: N = 15
// Output: 1111
// Explanation: 15 in binary is represented as "1111".

// Example 2:
// Input: 18
// Output: 10010
// Explanation: 18 in binary is represented as "10010".

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to be converted: ";
    cin>>n;

    string s;
    int ans = 0;
    while (n>0)
    {
        int rem = n%2;
        s += (rem+ '0');
        n /= 2;
    }
    reverse(s.begin(),s.end());
    cout<<s;
}