#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid()
    {
        // salary = 2000;
        
        cout << "enter the employee id " << endl;
        cin >> id;
        cout << "enter the employee salary " << endl;
        cin >> salary;
    }
    void getid()
    {
        cout << "the employee id is " << id << endl;
        cout << "the employee salary is " << salary << endl;
    }
};

int main()
{
    //   employee arjun,aj,anshu;
    //   arjun.setid();
    //   arjun.getid();

    employee arr[4];
    for (int i = 0; i < 4; i++)
    {
        arr[i].setid();
        arr[i].getid();
    }

    return 0;
}