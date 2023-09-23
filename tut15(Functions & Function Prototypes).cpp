#include<iostream>
using namespace std;


//Function Prototypes can help put functions after the main loop \
as they give a basic idea that there is a function aftewards \
note- function prototypes have to be put before the main loop

//Function prototype - type functioname(arguments)

// int sum(int a,int b); // acceptable & same as below mentioned function
// int sum(inta,b); //Not acceptable
int sum(int,int); // Acceptable
void g();

int main(){
    
    //function example - sum
    int num1,num2;
    cout<<"Enter the 1st value"<<endl;
    cin>>num1;
    cout<<"Enter the 2nd value"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters ... this give values to formal parameters
    cout<<"The sum of num1 and num2 is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

// Note we can put same name a and b for actual and formal parameters
// type function name(arguments)
int sum(int a, int b){        // Note - Functions have to be before the main loop otherwise compiler doesnt know if there is a function
    int c = a+b;    // a and b are formal parameters .. they 'take value' from actual parameters
    return c;           // Here use return not cout to return value of c
}

void g(){
    cout<<"Hello ,Good morning";
}

