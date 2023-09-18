#include<iostream>
using namespace std;

int main(){
    string a,b;
    string c;
    char d = ' ';
    
    cout<<"Enter the vorname\n"<<endl;
    cin>>a;
    cout<<"Enter the nachname\n"<<endl;
    cin>>b;
    c= a+d+b;
    cout<<"The full name of candidate is : "<<c<<endl;


    return 0;
}