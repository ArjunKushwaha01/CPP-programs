#include<iostream>
using namespace std;

 class complex {
    int a, b;
    public:
    void setdata(int v1, int v2){
        a = v1;
        b = v2;

    }
    friend complex sumcomplex(complex o1,complex o2);
    void print(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }

 };

complex sumcomplex(complex o1, complex o2 )//this line means that non member -- sumcomplex function is allowed to do anything with complex class private member function
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    complex c1,c2, sum;
    c1.setdata(1,2);
    c1.print();

    c2.setdata(3,2);
    c2.print();

    sum = sumcomplex(c1,c2);
    sum.print();


    return 0;
}
/*
properties of friend
1. not in the scope of class 
2. since it is not in the scope of class, it cannot be called from the object of that class, c1.sumcomplex() == invalid   
3. can be invoked(call) without the help of any object
4. usually contain the objects as argument 
5. can be decleared inside public or private section of the class
6. it cannot be access the member directly by their names and need object_name.member_name to access any member
*/