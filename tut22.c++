#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_comp(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}

void binary :: chk_bin(void)
{
    for (int i = 0;  i < s.length();  i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary value" << endl;
            exit(0);
        }
       
        
    }
    
}
void binary ::ones_comp(void){
    for(int i = 0; i < s.length();i++){

    
    if(s.at(i)=='0'){
        s.at(i)='1';
    }
    else 
    {
        s.at(i)= '0';
    }
}
}

void binary ::display(void)
    {
        cout<<"correct binary number"<<endl;
        cout<<"display your binary num"<<endl;
        for(int i = 0; i< s.length();i++)
        cout<<s.at(i);

        
    }

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones_comp();
    b.display();

    return 0;
}