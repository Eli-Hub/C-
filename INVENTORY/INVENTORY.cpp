#include <iostream>
#include <cstdlib>
using namespace std;
#include "INVENTORY.h"

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
    cout << endl <<endl;
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
