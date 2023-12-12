#include <iostream>

using namespace std;
int main()
{
    //  int i;
    // syntax for for loop

    //   for(initilization; condition; updation){
    //          loop body(c++ code)
    //   }

    //   for(int i = 0; i < 4; i++){
    //   cout<<i<<endl;
    //   }
    // example for infinite  for loop
    //  for(i = 0; 1 < 4; i++){
    //  cout<<i<<endl;
    //  i++;
    //  }

    // syntax for while loop
    // printing 1 to 40 using while loop
    //    int i = 1;
    //    while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    //    }

    // syntax for do while loop
    // do{
    //     c++ statement;// if the condition is true loop will run 1 time and run according to the condition
    // i++;
    // }while(condition);// if the condition is false the loop will run 1 time and stop
    // int i= 1;
    // do{
    //  cout<<i<<endl;
    //  i++;
    // }while(i<=40);
    // }while(false);

    // for 6 table
    int i = 1;
    do
    {
        cout << i * 6 << endl;
        i++;
    } while (i <= 10);
    return 0;
}
