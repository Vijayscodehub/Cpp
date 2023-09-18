
// // Just simple addtion the following code can be used for int and i have tried of char& strings
// #include<iostream>
// using namespace std;

// string c = "prem";

// int main(){
//     string a,b;
//     string c;
//     char d = ' ';
    
//     cout<<"Enter the vorname\n"<<endl;
//     cin>>a;
//     cout<<"Enter the nachname\n"<<endl;
//     cin>>b;
//     c= a+d+b;
//     cout<<"The full name of candidate is : "<<c<<endl;
//     cout<<"The global name is "<<::c; // this :: is used to display c from global code .. if we do just c then we will get c from local variable


//     return 0;
// }

// //The same can be done for int also


//*********float,long double,doubleLITERALS*********************

// #include<iostream>
// using namespace std;

// int main(){

//     float d = 94.8f; //f is for defining the value as float
//     long double e = 94.8; // l is here to define thr value as long double
//     // if no l or f after the decimal number then it is by default double 
//     cout<<"The value of d is : "<<d<<endl<<"The value of e is : "<<e;
   
//     cout<<"The size of 98.4 is "<<sizeof(98.4)<<endl;
//     cout<<"The size of 98.4f is "<<sizeof(98.4f)<<endl;
//     cout<<"The size of 98.4F is "<<sizeof(98.4F)<<endl;
//     cout<<"The size of 98.4l is "<<sizeof(98.4l)<<endl;
//     cout<<"The size of 98.4L is "<<sizeof(98.4L)<<endl;
    
    
//      return 0;

// }
// PS D:\C++\C++ course> g++ tut7.cpp
// PS D:\C++\C++ course> .\a.exe

// sizeof(98.4) is used to find the size of a double constant, which is typically 8 bytes.
// sizeof(98.4f) is used to find the size of a float constant, which is typically 4 bytes.
// sizeof(98.4F) is the same as sizeof(98.4f); it also finds the size of a float constant.
// sizeof(98.4l) is used to find the size of a long double constant, which is typically larger than double, often 12 or 16 bytes.
// sizeof(98.4L) is the same as sizeof(98.4l); it also finds the size of a long double constant.
// These sizeof expressions help you understand the memory consumption of different floating-point constants with different type suffixes (f, F, l, L).


/*float: Single-precision floating-point type with moderate precision and range.
double: Double-precision floating-point type with higher precision and range compared to float.
long double: Extended-precision floating-point type with even higher precision and range compared to double.*/


// //****************BUILT IN DATA TYPES -  REFERENCE VARIABLES***************************************************
// #include<iostream>
// using namespace std;
// //rohandas ----> MOnty -----> Rohu ;
// // this is done to append one variable value to another

// int main(){

//     float x = 455;
//     float & y = x;
//     cout<<x<<endl<<y<<endl;

// return 0;

// }

//****************Typecasting******************** 
#include<iostream>
using namespace std;
// converting one datatype to another datatype
int main(){

    int a = 5;
    float b = 55.54;
    cout<<"The value of a is :"<<(float)a<<endl; 
    cout<<"The value of a is :"<<float(a)<<endl; 
    cout<<"The value of b is :"<<(int)b<<endl;
    cout<<"The value of b is :"<<int(b)<<endl;

    int c  =int (b);
    cout<<"The value of c is "<<c<<endl;

    cout<<"The expression a+b is "<<a+b<<endl;
    cout<<"The expression a+int(b) is "<<a+int(b)<<endl;
    cout<<"The expression is a+(int)b "<<a+(int)b<<endl;





return 0;

}
