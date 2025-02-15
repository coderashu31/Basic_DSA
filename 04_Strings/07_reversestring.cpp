// Reverse a String
// Solution 1: Using Stack

#include<bits/stdc++.h>
using namespace std;

string reversed_str(string &str){
    stack<char> st;
    int n = str.length();
    for(int i=0; i<n ; i++){
        st.push(str[i]);
    }

    string reversed_str="";
    while (!st.empty())
    {
        reversed_str += st.top();
        st.pop();
    }

    return reversed_str;
}

int main(){
    string str = "Reverse a String";
    cout<< reversed_str(str);
    return 0;
}