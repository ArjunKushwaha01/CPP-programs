#include<iostream>
using namespace std;

class emp
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);//declare
        void getdata(){
             cout<<"the value of a is "<<a<<endl;
             cout<<"the value of b is "<<b<<endl;
             cout<<"the value of c is "<<c<<endl;
             cout<<"the value of d is "<<d<<endl;
             cout<<"the value of e is "<<e<<endl;
        }
};

void emp :: setdata(int a1,int b1,int c1){
    a = a1;
    b = b1; 
    c = c1;
}

int main(){

    emp arjun;
    // arjun.a = 55;// this will show an error as a,b,c is declared private
    arjun.setdata(3,4,5);
    arjun.d = 1;
    arjun.e = 2;
    arjun.getdata();

    
    return 0;
}