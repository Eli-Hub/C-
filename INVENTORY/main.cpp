#include <iostream>
#include <cstdlib>
#include "INVENTORY.h"

using namespace std;

class INVENTORY
{
private:
    int ItemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
     INVENTORY ();
    ~INVENTORY();
    INVENTORY (int, int, double);
    void setItemNum (int);
    void setQuantity (int);
    void setCost (double);
    void setTotalCost ();
    int getItemNum () const;
    int getQuantity () const;
    double getCost () const;
    double getTotalCost () const;
};

INVENTORY::INVENTORY ()
{
    ItemNumber=0;
    quantity=0;
    cost=0.0;
}


INVENTORY::INVENTORY (int num, int quan, double cos)
{
    ItemNumber=num;
    quantity=quan;
    cost=cos;
    setTotalCost();
    cout <<endl;
    cout << "ITEM NUMBER: "<<getItemNum()<<endl;
    cout <<endl;
    cout << "QUANTITY OF GOODS: "<<getQuantity()<<endl;
    cout <<endl;
    cout << "COST PER GOOD: GHC "<<getCost()<<endl;
    cout <<endl;
    cout << "TOTAL COST OF GOODS: GHC "<<getTotalCost()<<endl;
    cout << endl;
}


INVENTORY::~INVENTORY()
{
    cout << endl<<endl;
    cout << "Thanks for Transacting Business with ELI VENTURES.....Bye!!!"<<endl;
}


void INVENTORY::setItemNum(int No)
{
    ItemNumber=No;
}
void INVENTORY::setQuantity(int q)
{
    quantity=q;
}
void INVENTORY::setCost(double c)
{
    cost=c;
}
void INVENTORY::setTotalCost()
{
   totalCost=cost*quantity;
}
int INVENTORY::getItemNum() const
{
    return ItemNumber;
}
int INVENTORY::getQuantity() const
{
    return quantity;
}
double INVENTORY::getCost() const
{
    return cost;
}
double INVENTORY::getTotalCost() const
{
    return totalCost;
}





int main()
{
    int itemNum, quant;
    double cost;
    char opt;

     cout << "     E L I - V E N T U R E S    \n"
          << "................................\n\n"
          << "*** DAILY SALES INVENTORY SYSTEM ***\n\n";

do {
    cout << "Enter Item's Number: ";
    cin>> itemNum;


    cout << "Enter Quantity Sold: ";
    cin >> quant;
    while (quant<=0)
{
    cout << "INVALID INPUT for quantity  - Try Again " ;
    cin >>quant;
}

    cout << "Enter the Unit price of the Item: ";
    cin >>cost;

    while (cost<=0)
{
    cout << "INVALID INPUT for cost  - Try Again " ;
    cin >>cost;
}

    INVENTORY sale (itemNum,quant,cost);


    cout << "Press 'N' for the Next transaction or any other key to exit: ";
    cin >>opt;
    }while (opt=='N' || opt=='n');
    exit (EXIT_FAILURE);


    return 0;
}
