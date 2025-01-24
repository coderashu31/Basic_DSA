#include <iostream>
using namespace std;

/*

* * * 
* * * 
* * * 

*/


void print1(int n) {
    for (int i = 0; i < n; i++) {      // Outer loop for rows
        for (int j = 0; j < n; j++) {  // Inner loop for columns
            cout << "* ";
        }
        cout << endl;                  // Move to the next line
    }
}




// *
// * *
// * * *



// void print2(int n) {
//     for (int i = 0; i < n; i++) {      // Outer loop for rows
//         for (int j = 0; j <= i; j++) {  // Inner loop for columns
//             cout << "* ";
//         }
//         cout << endl;                  // Move to the next line
//     }
// }



// void print3(int n){
//     for(int i = 0;i < n;i++){

//     }
// }



int main() {
    for (int i = 0; i < ; i++) {      // Loop over test cases
        int n;
        cin >> n;                      // Input size for each test case
        cout<<"\n";
        print3(n);                     // Print the NxN matrix
    }
    return 0;
}
