// call by reference: pass the memory address to the variables

#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){
    
    int a=20;
    int b=45;
    cout<<"Values of a and b before swap \n";
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    
    swap(&a,&b); // &a memory address of a and &b memory address of b
    
    cout<<"Values of a and b after swap \n";
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    
    return 0;
}

void swap(int *a, int *b){ // *a(value at memory address a. a can store the memory address of any other variable))
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
