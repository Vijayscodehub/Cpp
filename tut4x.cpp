#include<iostream>
using namespace std;
int glo = 2;
void sum(){      //void means it doesnt return anything
    cout<<glo<<endl;
 }

int main(){ //int means it return something
    int a = 4,b= 5;
    char v = 'e';
    float pi = 3.14;
    // cout<<"This is tutorial 4 repeat"<<endl;
    // cout<<"\n The value of a is "<<a<< "\n the value of b is " << b<<"\n The value of char is "<<v<<endl;
    // cout<< pi<< endl;
    // bool is_true = true;
    // cout<< is_true << endl;
    int glo = 7;
    glo = 97;
    sum();
    cout<< glo << endl;


    return 0;
}

//first the code run will go through int main and goes through int a b char and then comes to int glo within main and gets it value 7 and the next line it is chnaged to 97 and then it will rum sum()
//sum taken code runner wihtin void sum function and there it runs cout glo which searches
// is there a glo within sum function , ans is no and then it checks globally 
// ans is yes it prints the cout within sum whicb prinhs global int variable glo which is 2;
// then back to main function where there is another cout to be run which checks locally within main
//ans is yes it was 7 changed to 97 whichis printed after wards 