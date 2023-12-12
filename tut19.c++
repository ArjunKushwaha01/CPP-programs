#include<iostream>

using namespace std;
// recursion function for fibbonacci sequence
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// factorial by recursion function
int factor(int n){
    if(n<=1){
        return 1;
    }
    return n * factor(n-1);
}
// how it is evaluate
// step by step calculation of factorial 4
// factor(4)= 4* factor(3);
// factor(4)= 4* 3 *factor(2);
// factor(4)= 4* 3 * 2 *factor(1);
// factor(4)= 4* 3 * 2 * 1;// meet the if requirment
// factor(4)= 24;

int main(){
    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    // cout<<"the factorial of "<<a<<" is "<<factor(a)<<endl;
    cout<<"the term in the fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}