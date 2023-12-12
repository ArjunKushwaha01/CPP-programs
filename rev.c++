#include <iostream>
using namespace std;
// foward declration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    // indivualy declare function as friend
    /*friend int calculator ::sumrealcomplex(complex, complex);
    friend int calculator ::sumcompcomplex(complex, complex);*/

    // aliter : declaring the entire calculator class as function
    friend class calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b - o2.b);
}

int main()
{
    complex o1, o2;
    o1.setdata(1, 2);
    o2.setdata(2, 3);

    calculator clc, calc;
    int res = clc.sumrealcomplex(o1, o2);
    cout << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);
    cout << resc << endl;

    return 0;
}