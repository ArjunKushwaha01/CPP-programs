#include<iostream>
using namespace std;

    //    Function prototype
  // type function-name(arguments); ---> syntax
// int sum(int a, int b);// acceptable
// int sum(int a, int b);// not acceptable
int sum(int , int );// acceptable

// void g(void);// acceptable
void g();// acceptable

int main(){
    int num, num0;
     
    cout<<"enter the first number "<<endl;
    cin>>num;
    cout<<"enter the second number "<<endl;
    cin>>num0;
    // num and num0 are actual parameters
    cout<<"the sum of number is  "<<sum(num, num0);
    g();
    return 0;
}
int sum(int a, int b){
    //  formal parameters a and b will be taking values from actual parameters num and num0
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nhello, good morning";
    
}