#include <iostream>
using namespace std;

class shop
{
    int itemid[10];
    int itemprice[10]; 
    int counter;
    

    public:

    void initcounter(void) {counter = 0;}
    void setprice(void);
    void displayitem(void);
};

void shop::setprice(void){
    cout<<"enter the number of itemid "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the item price"<<endl;
    cin>>itemprice[counter];
    counter ++;
}

void shop :: displayitem(void){
    for(int i =0;i<counter;i++)
    cout<<"the price of item with id is "<<itemid[i]<<" is "<<itemprice[i]<<endl;
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayitem();
    return 0;
}