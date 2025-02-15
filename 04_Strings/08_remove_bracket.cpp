// Remove brackets from an algebraic expression

// Example 1:
// Input: “a+((b-c)+d)”
// Output: “a+b-c+d”
// Explanation: Removed all the brackets in the algebric expression.

// Example 2:
// Input: “(((a-b))+c)”
// Output: “a-b+c”
// Explanation: Removed all the brackets in the algebric expression.


#include<bits/stdc++.h>
using namespace std;

//brute force
string remove_brac(string &str){
    int n = str.size();
    string ans_str;
    for(int i=0; i<n; i++){
        if(str[i] != '(' && str[i] != ')'){
            ans_str.push_back(str[i]);
        }
    }
    return ans_str;
}


//optimised approach
/*
string remove_brac(string str){
    int n = str.size();
    int j = 0;

    unordered_set<char> brackets = {')', '('};
    for(int i=0; i<n; i++){
        if(brackets.count(str[i])){
            str.erase(str.begin()+i);
            i--;
        }
    }
    return str;
}
*/





int main(){
    string str = "a+((b-c)+d)";
    cout<<remove_brac(str);
    return 0;
}