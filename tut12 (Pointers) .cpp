#include<iostream>
using namespace std;

int main(){
    // what is a pointer ---> data type --> which holds address of other datatypes

    int a = 3;
    int* b = &a;
    
    //& ====> (address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    //* ----> (value at )dereference operator
    cout<<"The value at address of b is "<<*b<<endl;

    //Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;    
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;    


// understanding:  & is a address of operator which references things..\
* is a dereference operator.. therefore if we address of (reference ) any variable wih int* , we store the 'address' of the variabe ..\
Here int* b was referencing the 'address' of 'a'..\
similarly when in cout we put b we get the 'address' \
and when we put *b we basically dereference b and we get the value  \
as 3 which was stored in a.... Similarly for c .. c references b or stores  address of b \
one time dereferencing of c gives address of b and two time dereferecing gives value of a which was referenced by b.

    return 0;
}
