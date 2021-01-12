// else if statements:
/*
 if(condition 1){
 execute this code when condition 1 is true
 } else if(condition 2){
    execute this when condition 2 is true
 } else if(condition 3)
 
 else{
 
 */



#include <iostream>
using namespace std;

int main(){
    
    int marks;
    cout<<"Please enter your marks";
    cin>>marks;
    
    if(marks>=90){
        cout<<"A Grade";
    }else if(marks>=80 && marks<90){
        cout<<"B Grade";
    } else if(marks>=60 && marks <=80){
        cout<<"C Grade";
    }else if(marks>=50 && marks<60){
        cout<<"D Grade";
    }else{
        cout<<"F Grade";
    }
    return 0;
    
}

