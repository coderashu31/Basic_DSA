// Reverse Words in a String

// Example 1:
// Input: s=”this is an amazing program”
// Output: “program amazing an is this”

// Example 2:
// Input: s=”This is decent”
// Output: “decent is This”

// Can be done using Stack
/*
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
*/

//Optimised method:
#include<bits/stdc++.h> // Includes all standard library headers
using namespace std;

// Function to reverse words in a string
string result(string s) {
    int left = 0;  // Pointer to the start of the string
    int right = s.length() - 1;  // Pointer to the end of the string
    
    string temp = "";  // Temporary variable to hold the current word
    string ans = "";   // Final result to store reversed words
    
    // Iterate through the string to reverse the order of words
    while (left <= right) {
        char ch = s[left];  // Get the current character
        
        if (ch != ' ') {  // If the character is not a space, add it to the current word
            temp += ch;
        } else if (ch == ' ') {  // If a space is encountered, process the current word
            if (ans != "") 
                ans = temp + " " + ans;  // Add the word to the beginning of the result
            else 
                ans = temp;  // Initialize the result if it's the first word
            temp = "";  // Reset the temporary variable for the next word
        }
        left++;  // Move to the next character
    }
    
    // Handle the last word if any
    if (temp != "") {
        if (ans != "") 
            ans = temp + " " + ans;  // Add the last word to the beginning
        else 
            ans = temp;  // Initialize the result if it's the only word
    }
    
    return ans;  // Return the reversed string
}

int main() {
    string st = "TUF is great for interview preparation";
    
    // Print the original string
    cout << "Before reversing words: " << endl;
    cout << st << endl;
    
    // Print the reversed string
    cout << "After reversing words: " << endl;
    cout << result(st);
    
    return 0;
}

