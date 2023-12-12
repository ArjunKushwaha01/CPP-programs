#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int , int);
    void print()
    {
        cout << "the value of is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x, int y)//--> parameterized constructor as it takes parameter
{
    a = x;
    b = y;
    cout << "hello" << endl;
}

int main()
{
    // implicit call
    complex c(6,5);
    // explicite call
    complex b = complex(2,4);
    c.print();
    b.print();

    return 0;
}