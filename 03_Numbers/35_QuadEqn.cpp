// Program to Find Roots of a quadratic equation

// Example 1:
// Input: a = 1, b = -3, c = -10
// Output: Roots are real and different, i.e(5 , -2).

// Example2:
// Input: a = 1, b = 1, c = 1
// Output: Roots are complex, i.e-(-0.5+i1.732 , -0.5-i1.732).

#include <bits/stdc++.h>
using namespace std;

void Roots(int a, int b, int c) {
    int disc = b * b - 4 * a * c; // Discriminant
    double sqrt_val = sqrt(abs(disc));

    if (disc > 0) {
        cout << "Roots are real and different: ";
        double root1 = (-b + sqrt_val) / (2 * a);
        double root2 = (-b - sqrt_val) / (2 * a);
        cout << "(" << root1 << ", " << root2 << ")\n";
    } else if (disc == 0) {
        cout << "Roots are real and same: ";
        double root = -b / (2.0 * a);
        cout << "(" << root << ", " << root << ")\n";
    } else { // disc < 0
        cout << "Roots are complex: ";
        double realPart = -b / (2.0 * a);
        double imaginaryPart = sqrt_val / (2.0 * a);
        cout << "(" << realPart << "+i" << imaginaryPart << ", " 
             << realPart << "-i" << imaginaryPart << ")\n";
    }
}

int main() {
    int a = 1, b = -3, c = -10; 
    Roots(a, b, c);

    a = 1; b = 1; c = 1; 
    Roots(a, b, c);

    return 0;
}
