/*
Example 1:
Input: str1 = "takeuyuforward"
       str2 = “forward”
Output: 5
Explanation: "Forward" is present in the 5th index in "takeuforward"

Example 2:
Input: str1 = “hello”
       str2 = “az”
Output: -1
Explanation: "az" is not a substring of "hello"
*/


#include<bits/stdc++.h>
using namespace std;

/*
brute force:
O(N^2) 
O(1)



int foundPattern(string text, string pattern){
       int n = text.length();
       int m = pattern.length();

       if(m>n){return -1;}
       

       for (int i = 0; i <= n - m; i++) {  // iterate only up to n - m
        int j = 0;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {  // compare corresponding characters
                break;
            }
        }
        if (j == m) {  // if the entire pattern matches
            return i;
        }
       }
       return -1;
} 
*/

// Using library function 
// O(N)
// O(1)

int foundPattern(string text, string pattern) {
    auto foundIdx = text.find(pattern);
    if (foundIdx != string::npos) {
        cout << "The substring starts from the index: " << foundIdx << endl;
    } else {
        cout << "Substring not found!" << endl;
    }
    return foundIdx;
}

int main() {
    string text = "takeuyuforward";
    string pattern = "forward";

    int foundAtIndex = foundPattern(text, pattern);
    cout << "Found at Index: " << foundAtIndex << endl;
    return 0;
}