#include<iostream>
#include <cmath>
using namespace std;

class Point{
    int x, y;
    friend int distance(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

int distance(Point p1, Point p2){
    return (sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y),2)));
}

int main(){
    int a1,b1,a2,b2;
    cout<<"Enter the coordinates of the first point with a space in between\n";
    cin>>a1>>b1;
    Point p(a1, b1);
    p.displayPoint();

    cout<<"Enter the coordinates of the second point with a space in between\n";
    cin>>a2>>b2;
    Point q(a2, b2);
    q.displayPoint();

    cout<<"The distance between these two points is "<<distance(p, q);
    return 0;
}