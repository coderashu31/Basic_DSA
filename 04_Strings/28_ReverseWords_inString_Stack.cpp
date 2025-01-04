// Reverse Words in a String

// Example 1:
// Input: s=”this is an amazing program”
// Output: “program amazing an is this”

// Example 2:
// Input: s=”This is decent”
// Output: “decent is This”

// Can be done using Stack
// Brute force:
#include<bits/stdc++.h> 
using namespace std;

int main() {
    string s = "TUF is great for interview preparation";

    cout << "Before reversing words: " << endl;
    cout << s << endl;

    // Append a space to the string to handle the last word
    s += " ";

    stack<string> st; // Stack to store individual words
 
    string str = ""; // Temporary variable to store the current word

    // Loop through the string character by character
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') { // Check if the current character is a space
            st.push(str); // Push the word into the stack
            str = ""; // Reset the temporary word string
        } else {
            str += s[i]; // Add the character to the current word
        }
    }

    string ans = ""; // Variable to store the final reversed string

    // While there is more than one word in the stack
    while (st.size() != 1) {
        ans += st.top() + " "; // Add the top word from the stack and a space
        st.pop(); // Remove the top word from the stack
    }

    // Add the last word to the result without a trailing space
    ans += st.top(); 
    // No need to pop here as the stack is not used further

    // Print the reversed string
    cout << "After reversing words: " << endl;
    cout << ans;

    return 0;
}
