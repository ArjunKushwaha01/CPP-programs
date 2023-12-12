#include<iostream>
using namespace std;

 class simple{
    int data1;
    int data2;
    int data3;

    public:
    simple(int a , int b=2, int c=6){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printnumber();
 };
 void simple ::printnumber(){
    cout<<"the value of data1 , data2 and data3 is "<<data1<<" , "<<data2<<" and "<<data3<<endl;
 }

int main(){
    simple x(4);
    x.printnumber();
    
    return 0;
}