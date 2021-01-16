// recursion: the function which calls itself
/*
 recursionFunction(){
  recursionFunction();
};
 * factorial of 3: 3*2*1=6
 * factorial of 5: 5*4*3*2*1=120
 * factorial of 7: 7*6*5*4*3*2*1=5040
*/
//Write a program to find the factorial of function using recursion
#include <iostream>
using namespace std;
int fact(int);
int main(){
    
    int a=7;
    int result=fact(a);
    cout<<"Factorial of "<<a<<"="<<result;
    return 0;
}

int fact(int a){ //recursive function
    if(a==0){
        return 1;
    }
    return a*fact(a-1);
}