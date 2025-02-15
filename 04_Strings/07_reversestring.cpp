// Reverse a String

#include<bits/stdc++.h>
using namespace std;

// Solution 1: Using Stack
/*
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
*/

// Solution 2: Using the two-pointer Approach
/*
string reversed_str(string &str){
    int i = 0;
    int j = str.length() - 1;

    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}
*/

//using STL
string reversed_str(string &str){
    reverse(str.begin(),str.end());
    return str;
}



int main(){
    string str = "Reverse a String";
    cout<< reversed_str(str);
    return 0;
}