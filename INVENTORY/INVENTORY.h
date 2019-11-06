#include <iostream>
#include <cstdlib>

using namespace std;

#ifndef INVENTORY_H
#define INVENTORY_H


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


#endif // INVENTORY_H
