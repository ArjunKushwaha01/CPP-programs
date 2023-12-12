#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;

    public:
    void setdata(void){
        cout<<"enter the employee id "<<endl;
        cin>>id;
        count++;
    }

    void getdata(void){
        cout<<"the id of employee is "<<id<<" and the employee number is "<<count<<endl;

    }

    static void getcount(void){
        cout<<"the value of count is "<<count<<endl;
    }


};

int employee :: count;


int main(){
    // count is the static data member of class employee
    employee Arjun, AJ, Anshu;
    Arjun.setdata();
    Arjun.getdata();
    employee::getcount();

    AJ.setdata();
    AJ.getdata();
    employee::getcount();

    Anshu.setdata();
    Anshu.getdata();
    employee::getcount();
    return 0;
}