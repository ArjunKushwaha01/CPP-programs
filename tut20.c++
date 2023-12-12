#include<iostream>

using namespace std;

int sum(int a,int b){
    cout<<"using function with 2 argument"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using function with 3 argument"<<endl;
    return a+b+c;
}
// cylender
int volume(double r,int h){
    return (3.14*r*r*h);
}
// cube
int volume(int a){
    return(a*a*a);
}
// rectangle
int volume(int l,int b,int h){
    return (l*b*h);
}

int main(){
    cout<<"the sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"the sum of 3,4 and 5 is "<<sum(3,4,5)<<endl;
   cout<<"the volume of cylender is "<<volume(3,5)<<endl;
   cout<<"the volume of cube is "<<volume(3)<<endl;
   cout<<"the volume of rectangle is "<<volume(3,5,2)<<endl;
     
    return 0;
}