// Example 1:
// Input: N = 1011
// Output: 11
// Explanation: 1011 when converted to decimal number is “11”.

// Example 2:
// Input: 100
// Output: 4
// Explanation: 100 when converted to decimal number is “4”.



// method 1:
// Using predefined functions.

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s = "1011";
// 	cout << stoi(s, 0, 2);
// }

// Time Complexity: O(N).
// Space Complexity: O(1).

//  stoi function in C++ converts a string to an integer.
// int stoi(const std::string& str, size_t* pos = 0, int base = 10);

// Parameters:
// str: The string to convert.
// pos (optional): Pointer to a variable that will store the position of the first character after the number. Default is 0.
// base (optional): The numerical base (e.g., 10 for decimal, 16 for hexadecimal). Default is 10.


// method 2:
// normal method
<<<<<<< HEAD
#include<bits/stdc++.h>
=======
#include <iostream>
>>>>>>> 25f405b (updated Bin to dec)
using namespace std;

int main() {
    string s;
    cin >> s; 
    int n = s.length();

    int base = 1;  
    int ans = 0;  

    for (int i = n - 1; i >= 0; i--) { 
        if (s[i] == '1') {
            ans += base; 
        }
        base *= 2; 
    }

    cout << "Decimal equivalent: " << ans << endl;
    return 0;
}
