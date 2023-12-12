#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    complex(void); // constructor declaration
    void print()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void)//--> default constructor as it do not takes parameter
{
    a = 0;
    b = 0;
    cout<<"hello"<<endl;
}
int main()
{
    complex c;
    c.print();

    return 0;
}

//   prop, of const.
// 1. it should be declared in the puclic section of the class
// 2. they are auttomatically incoket(call) whenever the object is created
// 3. they cannot return values and do not have return type
// 4. it can have default argument
// 5. we cannot refer to their address
// 