/* Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
  Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.*/


// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     int roll_no;
    

// };

// int main(){
//     student n;
//     n.name;
//     cin>>n.name;
//     n.roll_no;
//     cin>>n.roll_no;
//     cout<<"the name of student is "<<n.name<<" the roll_no is "<<n.roll_no<<endl;

    
//     return 0;
// }


/*Assign and print the roll number, phone number and address of two students having names "Sam" and "John"
 respectively by creating two objects of the class 'Student'.*/

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     // string name;
//     string address;
//     int roll_no;
//     int phone_no;


// };

// int main(){
//     student sam , john;
//     sam.address;
//     cout<<"sam adderss is "<<endl;
//     cin>>sam.address;

//     sam.phone_no;
//     cout<<"sam phone_no is "<<endl;
//     cin>>sam.phone_no;

//     sam.roll_no;
//     cout<<"sam roll_no is "<<endl;
//     cin>>sam.roll_no;

//    cout<<"sam address is "<<sam.address<<" sam phone_no is "<<sam.phone_no<<" and sam roll_no is "<<sam.roll_no<<endl;


//     john.address;
//     cout<<"john adderss is "<<endl;
//     cin>>john.address;

//     john.phone_no;
//     cout<<"john phone_no is "<<endl;
//     cin>>john.phone_no;

//     john.roll_no;
//     cout<<"john roll_no is "<<endl;
//     cin>>john.roll_no;

//     cout<<"john address is "<<john.address<<" john phone_no is "<<john.phone_no<<" and john roll_no is "<<john.roll_no<<endl;
//     return 0;
// }




/*Write a program to print the area and perimeter of a triangle having sides
 of 3, 4 and 5 units by creating a class named 'Triangle'
 with a function to print the area and perimeter.*/


// perimeter = l + b + h
// area  =  (1/2) * b * h
//  #include<iostream>
//  #include<cmath>
//  using namespace std;
//  class triangle{
//     public:

//     int area_perimeter(int a , int b, int c){
//         int s = (a + b + c)/2;
//         cout<<"the area of triangle is "<<s<<endl;
//         cout<<"the perimeter of triangle is "<<a + b + c<<endl; 
//     }
    
//  };


 
//  int main(){
//     triangle a;
//     a.area_perimeter(3,4,5);
    
    
//     return 0;
//  }


/*Write a program to print the area and perimeter of a triangle having sides of 
3, 4 and 5 units by creating a class named 'Triangle'
 with the constructor having the three sides as its parameters.*/



 #include<iostream>
 #include<cmath>
 using namespace std;
 class triangle{
    public:
    int s1,s2,s3;
    triangle(int a,int b,int c){
        s1 = a;
        s2 = b;
        s3 = c;
    }
    void area_perimeter(){
        int s = (s1 + s2 + s3)/2;
        cout<<"the area of triangle is "<<s<<endl;
        cout<<"the perimeter of triangle is "<<(s1 + s2 + s3)<<endl;
 }
 };

 
 int main(){
    triangle t(3,4,5);
    t.area_perimeter();
    
    return 0;
 }