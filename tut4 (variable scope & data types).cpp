#include<iostream>
using namespace std;
int glo = 9;
void sum(){
    int a;
    cout<< glo;
}
//we start reading and executing code begining from main
int main(){

    int glo = 10;
    glo = 78;
    
    // int a =14, b = 15;
    // float pi = 3.14;
    // char c = 'u';
    bool is_true = true;
    sum();
    cout<<glo<< is_true <<endl; //is_true is just variable name
    // cout<<"This is tutorial 4.\n here the value of a is "<<a<<". \n the value of b is "<<b;
    // cout<< "\n the value of pi is "<<pi;
    // cout<< "\n the value of c is "<<c;
    return 0;
}
