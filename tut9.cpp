#include<iostream>
using namespace std;

int main(){
    // //cout<<"This is tut 9"<<endl;

    // // selection control structure ----> if,else if, else structure
    // int age;
    // cout<<"tell me your age: "<<endl;
    // cin>>age;
    // if ((age<35) && (age >0)){
    //     cout<<"You are eligible for exam "<<endl;
    // }

    // else if(age ==35){
    //     cout<<"You are on the verge but still you can give the gov exam"<<endl;
    
    // }
    
    // else if(age < 1){
    //     cout<<"You are not born"<<endl;
    
    // }

    // else{
    //     cout<<"You are eligible for gov exam"<<endl;
    // }

    // Selection control structure ---> Switch case statements


    int age;
    cout<<"tell me your age: "<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;

    case 22:
        cout<<"You are 22";
        break;

    case 2:
        cout<<"You are 2";
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }



    return 0;
}