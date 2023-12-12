#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34;
    // cout<<"the value of a was "<<a<<endl;
    // a = 55;
    // cout<<"the value of a is "<<a<<endl;
     //constant in c++ : constant cannot be changed
    // const int a =2;// here a is read-only variable,cannot be changed
    // cout<<"the value of a was "<<a<<endl;
    //  a = 55;
    //  cout<<"the value of a is "<<a<<endl;

    // setw

    // int a= 5,b = 55,c = 5555;
    // cout<<"the valure of a is "<<setw(4)<<a<<endl; 
    // cout<<"the valure of b is "<<setw(4)<<b<<endl; 
    // cout<<"the valure of c is "<<setw(4)<<c<<endl; 
    // cout<<"the valure of a without setw is "<<a<<endl; 
    // cout<<"the valure of b without setw is "<<b<<endl; 
    // cout<<"the valure of c without setw is "<<c<<endl; 
     
// operator precedent
    int a = 3,b = 5;
    int c = ((((a*5)+b)-45)+85);
    cout<<c;



     return 0;
}
