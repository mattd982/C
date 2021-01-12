// nested if statement example:
/*
 if(condition 1){
    if(condition 2){
       code
    }
}else{
  
  }
 */
 




#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    cout<<"Please enter first number=";
    cin>>A;
    cout<<"Please enter second number=";
    cin>>B;
    cout<<"Please enter third number=";
    cin>>C;
    
    if(A>B){
        if(A>C){
            cout<<"A";
        }else{
            cout<<"C";
        }            
    }else{
        cout<<"B";
    }
}
/* The console will only output A if A is greater than both B and C
   The console will output B if B is greater than A, does not matter if C is greater than B
   The console will output C only if C is greater than A and B is less than A
   If all numbers are equal, the console will output B
   If B is equal to C and both are greater than A, the console will output B
*/