#include<iostream>

using namespace std;
// inline function

inline int product(int a,int b){
    return a*b;
}
// int product(int a,int b){
//     static int c = 0; // This execute only once
//     c = c + 1; // next time this function is run, the value of c will b retained
//     return a*b+c;
// }

float moneyrecieved(int currentmoney,float factor = 1.04){
    return currentmoney * factor;
}

int main(){
    int a ,b;
    // cout<<"the product of a and b is  "<<product(a,b)<<endl;
    // cin>>a,b;
    int money = 100000;
    cout<<"if you have "<<money<<" RS in your bank account, you will recieved "<<moneyrecieved(money)<<" RS in 1 year" <<endl;
    cout<<"if you have "<<money<<" RS in your bank account, you will recieved "<<moneyrecieved(money,1.1)<<" RS in 2.5 year" <<endl;
    return 0;
}