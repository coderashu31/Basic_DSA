/*
Example 1:
Input: String str = “javA”
Output: JAVa
Explanation:
 Changed the lower case characters to uppercase and vice versa.

Example 2:
Input: String str = “take u forward IS Awesome”
Output: TAKE U FORWARD is aWESOME
Explanation: Changed the lower case characters to uppercase and vice versa.
*/

#include<bits/stdc++.h>
using namespace std;

// void caseconv(string &str, int n){
//     for(int i=0 ;i<n ; i++){
//         int ascii = (int)str[i];
//         if(ascii >= 65 && ascii <=90){
//             str[i] = (char)(ascii + 32);
//         } else if (ascii >= 97 && ascii <=122){
//             str[i] = (char)(ascii - 32);
//         }
//     }
//     cout << "Resultant string: " << "\n";
//     cout << str << "\n";
// }


void caseconv(string &str, int n){
 for (int i = 0; i < n; i++) {
    int ascii = (int) str[i];

    if (ascii >= 65 && ascii <= 90) // if uppercase
      str[i] = tolower(str[i]);

    else if (ascii >= 97 && ascii <= 122) // if lowercase
      str[i] = toupper(str[i]);

  }

  cout << "Resultant string: " << "\n";
  cout << str << "\n";
}


int main(){
    string str = "javA";
    int n = str.length();

    caseconv(str,n);
    return 0;
}