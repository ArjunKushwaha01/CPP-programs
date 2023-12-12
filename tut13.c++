#include<iostream>

using namespace std;

int main(){
    int a[4]={1,3,4,5};
    // cout<<a[0]<<endl;
    // cout<<a[1]<<endl;
    // a[2]=45; // change value of index 2
    // cout<<a[2]<<endl;
    // cout<<a[3]<<endl;
    // for loop 
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"the value of a "<<i<<" is "<<a[i]<<endl;
    // }

// while loop
    // int i = 0;
    // while(i<4){
    //     cout<<a[i]<<endl;
    //     i++;
    // }

    // do while
    int i = 0;
    do
    {
        cout<<a[i]<<endl;
        i++;
    } while (i<4);
       
    return 0;
}