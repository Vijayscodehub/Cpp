#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    //****************Constants*****************

    // const int a = 5;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 6; // This wont work as a is fixed as a constant
    // cout<<"The value of a is: "<<a<<endl;

    //****************Manipulators***************

    int a,b,c;
    a = 12,b=23,c=3336;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"The value of c is : "<<c<<endl;

    // with setw
    cout<<"The value of b with setw is : "<<setw(4)<<b<<endl;
    cout<<"The value of a with setw is : "<<setw(4)<<a<<endl;
    cout<<"The value of c with setw is : "<<setw(4)<<c<<endl;








    return 0;


}
