#include<iostream>
using namespace std;

// //struct
//     struct employee
//     {
//         //data
//         int eID;
//         float salary;
//         char building;
//     };

// //struct with type def and ep
//     typedef struct employee
//     {
//         //data
//         int eID;
//         float salary;
//         char building;
//     }ep ;

//Union
    union money
    {
        int rice;
        char car;
        float pounds;
    };
    
int main(){
    
    // //struct
    // struct employee Jayesh;
    // Jayesh.eID = 001;
    // Jayesh.salary = 80000;
    // Jayesh.building = 'c';

    // struct employee Max;
    // Max.eID = 002;
    // Max.salary = 65000;
    // Max.building = 'b';

    // cout<<"The details of employee "<<Jayesh.eID<<" is "<<Jayesh.salary<<" and "<<Jayesh.building<<endl;
    // cout<<"The details of employee "<<Max.eID<<" is "<<Max.salary<<" and "<<Max.building<<endl;


//struct with typeded and ep. This just helps to prevent \
writing struct employee again and again while creating employee details.



    // ep Jayesh;
    // Jayesh.eID = 001;
    // Jayesh.salary = 80000;
    // Jayesh.building = 'c';

    // ep Max;
    // Max.eID = 002;
    // Max.salary = 65000;
    // Max.building = 'b';

    // cout<<"The details of employee "<<Jayesh.eID<<" is "<<Jayesh.salary<<" and "<<Jayesh.building<<endl;
    // cout<<"The details of employee "<<Max.eID<<" is "<<Max.salary<<" and "<<Max.building<<endl;


// //Unions
//     union money m1;
//     m1.rice  = 1;
//     m1.car = 'v';  // in union either car or rice datatype can be used at \
//     time in m1 
    
//     cout<<m1.car<<endl;


//ENum
    enum Meal{breakfast,lunch,dinner};
    Meal m1 = lunch;
    cout<<(m1==1)<<endl;

    /*cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;*/

/*As shown in Code Snippet 7, 1st we have created an \
 enum “Meal” in which we have stored three named constants \
(breakfast, lunch, dinner). 2nd we have assigned the value of “lunch” \
to the variable “m1” and at the end, we have printed \
“m1”. The main thing to note here is that \
(breakfast, lunch, dinner) are constants; the value \
for “breakfast” is “0”, the value for “lunch” is “1” \
and the value for “dinner” is “2”. The output for \
the following program is shown in figure 2.*/

    return 0;
}
