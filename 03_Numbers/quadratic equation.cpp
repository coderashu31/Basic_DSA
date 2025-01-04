// Program to Find Roots of a quadratic equation

// Example 1:
// Input: a = 1, b = -3, c = -10
// Output: Roots are real and different, i.e(5 , -2).

// Example2:
// Input: a = 1, b = 1, c = 1
// Output: Roots are complex, i.e-(-0.5+i1.732 , -0.5-i1.732).

#include <bits/stdc++.h>
using namespace std;
 
void Roots(int a, int b, int c){
    int disc = b*b - 4*a*c;
    double sqrt = sqrt(abs(disc));

    if(d>0){
        cout << "Roots are real and different \n";
        
    } else if (d == 0) {
        cout<<"Roots are real and same \n";
    } else //d<0 
    {
        cout<< "Roots are complex \n ";
    }

}

int main()
{
    int a = 1, b = -3, c = -10;        
    Roots(a, b, c);
    return 0;
}