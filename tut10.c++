#include<iostream>

using namespace std;
// break statement- make a loop to print 1 to 10 and print till only 5
int main(){
//     int i;
//     for(i = 1;i<10;i++){
//         cout<<i<<endl;
//         if(i==5){
//         break;
//         }
//     }
//     return 0;
// }
// continue statement - make a loop from 1 to 10 but do not print 5 in it
    int i;
    for(i=1;i<=10;i++){
        if(i==5){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}