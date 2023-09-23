#include<iostream>
using namespace std;

int main(){
    // Array Format

    int Basket[5] = {22,23,24,25,26};

    //cout<<"These are basket numbers\n"<<endl;

    // cout<<Basket[0]<<endl;
    // cout<<Basket[1]<<endl;
    // cout<<Basket[2]<<endl;
    // cout<<Basket[3]<<endl;
    // cout<<Basket[4]<<endl;

    //cout<<"\nthese are mobile prices\n"<<endl;
    int mobile[6];
    mobile[0] = {25000};
    mobile[1] = {35000};
    mobile[2] = {45000};
    mobile[3] = {65000};
    mobile[4] = {70000};
    mobile[5] = {90000};

    //Change values for example
    mobile[2] = 40000;

    // cout<<mobile[0]<<endl;
    // cout<<mobile[1]<<endl;
    // cout<<mobile[2]<<endl;
    // cout<<mobile[3]<<endl;
    // cout<<mobile[4]<<endl;
    // cout<<mobile[5]<<endl;

// // // Using for loop
//     // int Basket[5] = {22,23,24,25,26};

//     for(int i = 0;i<4;i++){  // here i<4 because c++ starts counting from 0... \
//      we have 5 baskets but as c++ counts from  therefore i<4;
//         cout<<"The basket "<<i<<" is "<<Basket[i]<<endl;
//     }
//     cout<<""<<endl; //just for gap line btw 2 couts

//     for(int z = 0;z<6;z++){
//         cout<<"The mobile price of mobile "<<z<<" is "<<mobile[z]<<endl;
//     }
    
// // using while loop
// int i =0;
//     while(i<4){
//         cout<<"The basket "<<i<<" is "<<Basket[i]<<endl;
//         i++;
//     }

// int z =0;
//     while(z<6){
//         cout<<"The mobile price of mobile "<<z<<" is "<<mobile[z]<<endl;
//         z++;
//     }

    // using do while loop
// int i =0;
//    do{
//     cout<<"The basket "<<i<<" is "<<Basket[i]<<endl;
//     i++;
//    }while(i<4);

// int z =0;
//    do{
//     cout<<"The mobile price of mobile "<<z<<" is "<<mobile[z]<<endl;
//     z++;
//    }while(z<6);
   
//Pointer and arrays

    int*p = Basket;
    cout<<*(p++)<<endl; //first 22 the increment to 23
    cout<<*(p++)<<endl;//first 23 the increment to 24
    cout<<*(++p)<<endl; //first increment from 24 to 25 then print 25

    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    // cout<<"The value of *(p+4) is "<<*(p+4)<<endl;
    

    return 0;
}
