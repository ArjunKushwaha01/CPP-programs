#include<iostream>
using namespace std;
int glo = 5; //global variable accessable form any were in code
void sum(){
    int a; 
    cout<<glo;//<<"\n";
}
int main(){
    int glo = 2;// local variable only accesseble in local variable
    glo = 33;   // if same name variable  in both global & local local have the priority if call that function in local   
    //int a = 5, b = 2;
    float pi = 3.14;
    char c = 'h';
    bool is_true = false;//If bool give 1 means TRUE or If bool give 0 means FALSE
    sum();
    cout<<glo<<is_true;
    // cout<<glo<<"\n"<<is_true; code for print bool value in next line
    // // cout<<"The valu of a "<<a<<"\nThe value of b "<<b;
    // cout<<"\nValue of pi "<<pi;
    // cout<<"\nvalue of c  "<<c;
    return 0;
}