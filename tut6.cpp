// This is system header - comes with compiler
#include<iostream>
using namespace std;

// This is user defined header - defined by user
// #include"this.h"

int main(){
    // cout<<"This is a output \n";
    int a = 4,b=5;
    cout<<"operators in c++:\n";
    cout<<"Following are the types of arithmetic operators in c++\n";
    cout<<"The value of a+b is " <<a+b<<endl;
    cout<<"The value of a-b is " <<a-b<<endl;
    cout<<"The value of a*b is " <<a*b<<endl;
    cout<<"The value of a/b is " <<a/b<<endl; //division of int is int therefore float part of result is removed .8
    cout<<"The value of a%b is " <<a%b<<endl; //So, 4%5 equals 4, because when you divide 4 by 5, you get a quotient of 0 and a remainder of 4
    cout<<"The value of a++ is " <<a++<<endl; // post-increment operator a++. This operator first returns the current value of a and then increments it by 1
    cout<<"The value of a-- is " <<a--<<endl; //post-decrement operator a--. Similar to the post-increment operator, this operator first returns the current value of a and then decrements it by 1
    cout<<"The value of ++a is " <<++a<<endl; //pre-increment operator ++a. This operator first increments the value of a by 1 and then returns the updated value
    cout<<"The value of --a is " <<--a<<endl; // pre-decrement operator --a. This operator first decrements the value of a by 1 and then returns the updated value
    
    cout<<endl;
     //Assignment operators - used to assign values to varialbes
    //  int a=3 , b = 6;
    //  char d = 'd';

    //comparison operators
    cout<<"Following are comparison operators"<<endl;
    cout<<"The value of a == b is " <<(a==b)<<endl;
    cout<<"The value of a != b is " <<(a!=b)<<endl;
    cout<<"The value of a > b is "  <<(a> b)<<endl;
    cout<<"The value of a < b is "  <<(a< b)<<endl;
    cout<<"The value of a <= b is " <<(a<=b)<<endl;
    cout<<"The value of a >= b is " <<(a>=b)<<endl;


//logical operators
    cout<<"Following are logical operators"<<endl;
    cout<<"The value of logical  and operator ((a==b)&& (a<b)) is:  " <<((a==b)&& (a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) is " <<((a==b) || (a<b))<<endl;
    cout<<"The value of !(a > b) is "  <<(!(a> b))<<endl;
    

    return 0;







}


/*AND Operator (&&):

The "AND" operator returns true if and only if both of its operands are true.

Operand 1	Operand 2	Result
false	    false	     false
false	    true	     false
true	    false	     false
true	    true	     true


OR Operator (||):

The "OR" operator returns true if at least one of its operands is true.

Operand 1	Operand 2	Result
false	  false	        false
false	  true	        true
true	  false	        true
true	  true	        true



*/