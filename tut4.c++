#include<iostream>// system definde header file. comes in compiler
// #include"ynot.h"// user defined heather file. made by programmer
using namespace std;
int main()
{
    //arithmetic operator
    int a=1,b=2;
    cout<<"This is a program"<<endl;// endl creat a next line like /n
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    cout<<a++<<endl;
    cout<<b++<<endl;
    cout<<++a<<endl;
    cout<<--a<<endl;
    cout<<++b<<endl;
    cout<<--b<<endl;
    cout<<endl;

    //comparison operator//false = 0,true = 1
    
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<endl;
    //lodical operator
    cout<<((a==b) && (a>b))<<endl;// && means AND operator if both condition true print 1 or 0
    cout<<((a==b) || (a>b))<<endl;// || means or operator if any one condition true print 1 or 0
    cout<<(!(a==b))<<endl;// NOT means or operator if the condition is true it makes it false and vise versa

    
    return 0;
}
                            