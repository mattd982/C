// if statement: Example
/*
 if(condition){
    condition is true :code
 }else{
    when condition is false :code
 }
 */

#include <iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Please enter value=";
    cin>>a;
    
    if(a%2==0){
        cout<<"Number is even";
    }else{
        cout<<"Number is odd";
        
    }
    
    return 0;
}

