// pointers and array
// pointer arithmetic
// address new = address current +i* size(data type)
//     (p+i)            (p)             

#include<iostream>

using namespace std;

int main(){
// if you write int* p = &marks its wrong marks is the address
    int marks[4] = {21,34,3,2};

    int* p =marks;// in array this *p contain marks[0] value

    cout<<*(p++)<<endl;// *(p++) means first print marks [0] then increment
    // after increment the value is 34
    cout<<*(++p)<<endl;// *++p first increment then print

    // cout<<"the value of marks[0] is "<<*p<<endl;
    // cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"the value of *(p+3)] is "<<*(p+3)<<endl;

    // print entire array with the help of pointer
    //*(p+1) means marks[1]
    //*(p+2) means marks[2]
    //*(p+3) means marks[3]
}