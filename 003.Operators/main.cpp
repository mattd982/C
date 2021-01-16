//Conditional Operator: Find the larger number using conditional operator
//Relational Operator(> or < )
//Find the larger number

#include <iostream>
using namespace std;

int main(){
    int a,b;
    int c;
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    
    c=(a>b)?a:b; //Can use any of the following (b>a)?b:a; or (a<b)?b:a or(b<a)?a:b;
    cout<<"Greater number is = "<<c;
    
    return 0;
    
}

