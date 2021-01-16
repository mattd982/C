//call by value: pass the values to the function

#include <iostream>
using namespace std;
void swap(int, int);

int main(){
    int a=25;
    int b=100;
    cout<<"Values of a and b before swap \n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    swap(a,b);
    
    cout<<"Values of a and b after swap \n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
    
}

void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
