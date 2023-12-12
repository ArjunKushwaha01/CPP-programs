#include<iostream>
using namespace std;

int main(){
    /*int a =57;
    cout<<"After post increment by 1 the number is : "<<a <<endl;
    a++;// increase by 1 (post-increment)
    cout<<"After post increment by 1 the number is : "<<a <<endl;
    ++a;  // increase by 1 (pre-increment)
    cout<<"After pre increment by 1 the number is : "<<a <<endl;
    a += 1;// num is now increased by 1.
    cout<<"After post increment by 1 the number is : "<<a <<endl;
    a--;// decrease by 1 (post-decrement)
    cout<<"After post increment by 1 the number is : "<<a <<endl;
    --a;// decrease by 1 (pre-decrement)
    cout<<"After post increment by 1 the number is : "<<a <<endl;
    a -= 1;// num is now decreased by 1.
    cout<<"After post increment by 1 the number is : "<<a<<endl;*/

    int a,b;
    cout<<"enter first num"<<endl;
    cin>>a;
    cout<<"enter second num"<<endl;
    cin>>b;
    cout<<"1st num :"<<a<<endl;
    cout<<"2nd num :"<<b<<endl;
    int temp;
    temp =a;
    a = b;
    b = temp;
    cout<<"After swapping the 1st number is :"<<a<<endl;
    cout<<"After swapping the 2nd number is :"<<b<<endl;

   

    return 0;
}
// Q done are 1,2,3,4,5,6,7,9,12,13 
// day 1 total 10 question done