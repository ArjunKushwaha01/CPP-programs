#include<iostream>

using namespace std;

struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
};
union money
{
    /* data */
    int rice;
    char car;
    float pound;
};


int main(){
    enum trav{ car,bike,ev};
    trav m2 = car;// bike means print 1 nad ev will print 2
    cout<<m2;
    // struct employee arjun;
    // union money  m1;
    // cin>>m1.rice;
    // cin>>m1.car; in union only one data type will run if u run another it will overwrite and show garbage value
    // cout<<m1.rice;
    // cout<<m1.car;
    // arjun.eid = 34;
    // arjun.favchar = 'a';
    // arjun.salary = 50000;
    // cout<<"the value of "<<arjun.eid<<endl;
    // cout<<"the value of "<<arjun.favchar<<endl;
    // cout<<"the value of "<<arjun.salary<<endl;
    return 0;
}