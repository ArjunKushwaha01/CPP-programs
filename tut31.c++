#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;
    friend int distance(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypointer()
    {
        cout << "the pointer is (" << x << " , " << y << ")" << endl;
    }
};

int distance(point p1, point p2)
{
    return (sqrt(pow((p2.x - p1.x ), 2) + pow((p2.y - p1.y), 2)));
}
int main()
{
    int a1,b1,a2,b2;
    cout<<"enter the first point"<<endl;
    cin>>a1>>b1;
    point p (a1,b1);
    p.displaypointer();

    cout<<"enter the second point"<<endl;
    cin>>a2>>b2;
    point q(a2,b2);
    q.displaypointer();
    cout<<"distance between 2 points is "<<distance(p , q)<<endl;
    return 0;
}