/*Local and Global Variables using C++
 * Local variables are variables defined inside a function
 * Global variables are variables defined outside of a function
 */

#include <iostream>

using namespace std;
int b=20; // This is a global variable 
void display();

int main(){
    
    int a=10; // This is a local variable
    cout<<"local variable a="<<a<<endl;
    cout<<"global variable in main b="<<b<<endl;
    display();
    return 0;
}
void display(){
    cout<<"b="<<b; //Cannot compile the variable "a" because a is in the main function
}