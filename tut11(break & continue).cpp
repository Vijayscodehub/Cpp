#include<iostream>
using namespace std;

int main(){
    for (int i = 0;i<=40;i++){
    if (i==2){
    break;; //or we can put break/continue such that value will stop at 2
    }
    cout<<i<<endl;

    }
    // notice here in for loop the if statement \
    is before cout and in while loop it is after cout because in \
    while loop there is only condition in the format and in for loop there is initil..condi.. updation.. \
    so the basic idea is that the flow in while loop is conditon..code.. if statement.
    
// cgpt reason:  if statement is placed after the while loop. The loop runs as long as the initial condition is true,\
 and the if statement is checked after each iteration of the loop. If condition2 becomes true during the \
  execution of the loop, the code inside the if block is executed. This can be used when you want to perform \
   a particular action after the loop has finished executing, based on some condition.



    // int i =0;

    // while(int (i <=40)){

    // cout<<i<<endl;
    // i++;

    // if (i==2){
    //     break;;
    // }
    // }
    return 0;
}
