#include<iostream>
#include <iomanip>   // formatting floating-point numbers with 1 decimal place
using namespace std;

int main(){
    /*char gender = 'F';
    bool married  = true;
    unsigned short sons = 2;
    short year = 2009;
    unsigned int salary = 1500000;
    double  height = 79.48;
    float GPA = 4.69f;
    long drawn = 12047235l;
    long long balance = 995324987ll;

    cout<<"the gender is "<<gender<<endl;
    cout<<"is she married ? "<<married<<endl;
    cout<<"num of sons is "<<sons<<endl;
    cout<<"year of appointment is "<<year<<endl;
    cout<<"salary of a yera  is "<<salary<<endl;
    cout<<"height is "<<height<<endl;
    cout<<"GPA is "<<GPA<<endl;
    cout<<"salary drawn upto "<<drawn<<endl;
    cout<<"balance till is "<<balance<<endl;*/


    int m1 = 5, m2 = 7;
   double d1 = 3.7, d2 = 8.0;
   
    cout << "\n\n Display arithmetic operations with mixed data type :\n";
	cout << "---------------------------------------------------------\n";
   cout << fixed << setprecision(1);  
 
   cout <<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl;  
   cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;  
   cout <<" "<< m1 << " + " << d2 << " = " << m1+d2 << endl;  
 
   cout <<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl;  
   cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;  
   cout <<" "<< m1 << " - " << d2 << " = " << m1-d2 << endl;  
 
   cout <<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl; 
   cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  
   cout <<" "<< m1 << " * " << d2 << " = " << m1*d2 << endl;  
 
   cout <<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl;  
   cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  
   cout <<" "<< m1 << " / " << d2 << " = " << m1/d2 << endl;  
   cout << endl;
    
    return 0;
}