// Prime Numbers in a given range
// Examples:
// Input: 2 10
// Output: 2 3 5 7 
// Explanation: Prime Numbers b/w 2 and 10 are 2,3,5 and 7.

// Example 2:
// Input: 10 16
// Output: 11 13 
// Explanation: Prime Numbers b/w 10 and 16 are 11 and 13.



#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if (num == 1) {
        return false;
    }
    for(int j=2;j<= sqrt(num); j++){
        if(num%j == 0 ){
            return false;
        }
    }
    return true;
}

void PrintPrimeBwRange(int a, int b){
    bool found = false;
    for(int i =a ; i <= b ; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
    if (!found) {
        cout << "No prime numbers found";
    }
    cout << endl;
}

int main(){
    int a = 8 , b = 9;
    PrintPrimeBwRange(a,b);
    return 0;
}