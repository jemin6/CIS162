#ifndef CREDITCARD_H
#define CREDITCARD_H

#include <string>
#include "Person.h"
using namespace std;

class CreditCard
{
    public:
        /// Constructors
        CreditCard();

        CreditCard(string f, string l, string ad, int cNum, int cBal);
        int getCardNumber() {return card_Num;}
        string getOwnerName() {return person.getFirstName() + " " + person.getLastName();}
        string getAddress() {return person.getAddress();}
        double getBalance() {return card_Bal;}

        bool makeCharge(double charge);
        bool payBalance(double pay_Bal);

        void setCreditLimit(double credit_Limit);

    private:
        double card_Num, card_Bal, credit_Limit;
        Person person;
};

#endif // CREDITCARD_H

