// Remove characters from a string except alphabets

// Example 1:
// Input: string str = "take12% *&u ^$#forward"
// Output: takeuforward
// Explanation:
// Characters 1,2,%,*,&,^,$,# along with whitespaces are 
// removed but the order of remaining alphabets is preserved.

// Example 2:
// Input: String str = "1.Python & 2.Java"
// Output: PythonJava
// Explanation: 
// Characters 1.&2. along with whitespaces are removed 
// but the order of remaining alphabets is preserved.

#include<bits/stdc++.h>
using namespace std;


//brute force
/*
string remove_nonalphachar(string &str){
    int n = str.length();
    int j = 0;
    for(int i = 0; i<n ;i++){
        if(isalpha(str[i])){
            str[j++] = str[i];
        }
    }
    str.resize(j);
    return str;
}
*/



int main(){
    string str = "take12% *&u ^$#forward";
    cout<< remove_nonalphachar(str);
    return 0;
}