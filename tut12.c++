#include<iostream>

using namespace std;

int main(){
    // pointer -----> data type which holds the address of other dtat types
    int a= 4;
    int* b = &a;
    // &-----> (address of) operator
    cout<<"This address of a is "<<&a<<endl;
    cout<<"This address of a is "<<b<<endl;
    // *----> (value at ) dereference operator
    cout<<"the value at address of b is "<<*b<<endl;
    //  pointer to pointer "**"
    int** c =&b;
    cout<<"adderss of b is "<<c<<endl;
    cout<<"the value at adderss of c is "<<*c<<endl;
    cout<<"the value at adderss (value_at(value_at(c))) is "<<**c<<endl;
    return 0;
}