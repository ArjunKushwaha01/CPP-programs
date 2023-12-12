#include <iostream>
using namespace std;
class c2;
class c1
{
    int val;

public:
    void indata(int a)
    {
        val = a;
    }
    void display(void){
        cout<<val<<endl;
    }
    friend void exchange(c1 &, c2 &);
};
class c2
{
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void){
        cout<<val2<<endl;
    }
    friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
    // cout << "the exchange value a is " << x.val << " and y is " << y.val2 << endl;
};


int main()
{
    c1 a1;
    a1.indata(2);
    c2 b1;
    b1.indata(1);
    exchange(a1, b1);
    cout<<"the value of a1 is "<<endl;
    a1.display();
        cout<<"the value of b1 is "<<endl;
    b1.display();
   return 0;
}