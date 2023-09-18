#include<iostream>
using namespace std;

int main(){
    char c1 = 'a';
    char c2 = 'b';
    // string str1 = c1 + c2;
    // cout << str1; // print some garbled character, as it's not valid string.

    string str2; // null initialization
    str2 = str2 + c1 + c2;
    cout << str2; // prints ab correctly.


    // string s1 = "Hello";
    // string s2 = "World";
    // string str3 = s1 + s2;
    // cout << str3; //prints Hello World correctly.
    
    return 0;
}
