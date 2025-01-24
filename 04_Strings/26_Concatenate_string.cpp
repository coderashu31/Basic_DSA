/*
str 1: "Hello" 
str 2: "World"
Concatenation of str1 and str2 : "HelloWorld"
*/


/*
#include<bits/stdc++.h>
using namespace std;


// using + operator
string concat(string &str1, string &str2){
    return str1+str2;
}

int main(){
    string str1 = "Hello";
    string str2 = "World";

    string concatenation = concat(str1,str2);
    cout << "Concatenated String: " << concatenation << endl;

    return 0;
}

*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {

  char str1[100] ={'H','e','l','l','o'};
  char str2[100]= {'W','o','r','l','d'};
  
  strcat(str1,str2);
  cout<<str1;
}
*/




#include <bits/stdc++.h>
using namespace std;

int main() {

  string str1 = "Hello";
  string str2 = "World";
  
  str1.append(str2);
  
  cout<<str1;

}