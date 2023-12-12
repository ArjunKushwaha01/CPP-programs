#include<iostream>

using namespace std;

void swap(int a, int b){ // will not swap x and y
    int temp = a;
    a = b;
    b = temp;
}
// call by reference using pointers
void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by reference using c++ reference variable
void swapRefVar( int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
// call by reference using c++ reference variable
int & swapRef( int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    int x =1,y= 2;
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    // swap(x,y);// will not swap x and y
    // swappointer(&x,&y);// will swap x and y using pointer refernce
     swapRefVar(x, y);// will swap x and y by reference using c++ reference variable
    // swapRef(x, y) = 55;// if i return a the = value will overwrite a value and give a =55
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    return 0;
}