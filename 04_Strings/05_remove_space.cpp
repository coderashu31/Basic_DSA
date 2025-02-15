// Example 1:
// Input: str = “Take you forward” 
// Output: Takeyouforward
// Explanation: After removing all the whitespaces Takeyouforward is the result

// Example 2:
// Input: str = “How are you doing”
// Output: Howareyoudoing
// Explanation: After removing all the whitespaces Howareyoudoing is the result


#include<bits/stdc++.h>
using namespace std;

string removespaces(string &str){
    int n = str.length();
    int j = 0;
    for(int i=0; i<=n; i++){
        if(str[i] != ' '){
            str[j++] = str[i];
        }
    }
    str.resize(j);
    return str;
}


int main(){
    string str = "Take you forward";
    cout<< removespaces(str);
    return 0;
}