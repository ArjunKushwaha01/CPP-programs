 #include<iostream>
 using namespace std;
 class triangle{
    public:
    int l = 3;
    int b = 4;
    int h = 5;
    int area();
    int perimeter();
 };

int triangle :: area(){
    cout<< "area of triangle is  "<<l * b * h<<endl;
 }

 int triangle :: perimeter(){
    cout<<" parimater of a triangle is "<<l + b + h<<endl;
 }
 int main(){
    triangle a;
    a.area();
    a.perimeter();
    
    return 0;
 }