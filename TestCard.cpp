#include <vector>
#include "CreditCard.h"

using namespace std;

void testCard()
{
    vector<CreditCard*> wallet(10);

wallet[0]=new CreditCard("5591 5468 1354 1846", "Ali Veli",2500);
wallet[1]=new CreditCard("5553 5468 1354 1846", "Ali Veli",3500);
wallet[2]=new CreditCard("5677 5468 1354 1846", "Ali Veli",5000);

for (int j=1;j<=16;j++)
{
    wallet[0]->chargeIt(double(j));
    wallet[1]->chargeIt(2*j);
    wallet[2]->chargeIt(double(3*j));
}

cout<< "Card payments:\n";
for (int i=0;i<3;i++)