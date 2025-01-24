// Reverse Words in a String
// leetcode 151

// Example 1:
// Input: s=”this is an amazing program”
// Output: “program amazing an is this”

// Example 2:
// Input: s=”This is decent”
// Output: “decent is This”




#include<bits/stdc++.h>
using namespace std;

//Brute force (USING STACK) >> TC: O(N) , SC: O(N)
// https://www.youtube.com/watch?v=k1O1PhuarpI

string reverseSentence(string s){
    stack<string> st;
    for(int i=0; i<s.length(); i++){
        string word = "";
        while(s[i] != ' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty()){
        cout<< st.top() << " ";
        st.pop();
    }
    cout<<endl;
}




// optimised method >> TC: O(N) , SC: O(1)
// https://www.youtube.com/watch?v=vhnRAaJybpA

// string reverseSentence(string s) {
//     string result;
//     int i = 0;
//     int n = s.length();

//     while (i < n) {
//         while (i < n && s[i] == ' ') i++;
//         if (i >= n) break;
//         int j = i + 1;
//         while (j < n && s[j] != ' ') j++;
//         string sub = s.substr(i, j - i);
//         if (result.empty()) result = sub;
//         else result = sub + " " + result;
//         i = j + 1;
//     }
//     return result;
// }

int main(){
    string s = "this is an amazing program";
    reverseSentence(s);
    

    s= "This is decent";
    reverseSentence(s);
    

    return 0;
}



