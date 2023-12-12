#include<iostream>
using namespace std;

int main(){
    // cout<<"this is a new program ";
    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;
    // selcetion control structure if else-if else

    // if((age<18)&&(age>0)){
    //     cout<<"cannot enter";
    // }
    // else if(age==18){
    //     cout<<"only enter to kids section"<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not born yet";
    // }
    // else{
        // cout<<"you can enter";
    // }

// selcetion control structure switch case ststement
switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;// is break; will removed every string will print
    break;
case 2:
    cout<<"you are 2"<<endl;
    break;        

default:
cout<<"no special cases"<<endl;
    break;
}

    return 0;
    
}