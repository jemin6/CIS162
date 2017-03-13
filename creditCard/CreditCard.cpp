#include "CreditCard.h"
#include "Person.h"

CreditCard::CreditCard(string f, string l, string a, int cNum, int Limit)
{
//    fname = f;
//    lname = l;
//    address = ad;
    person.setFirstName(f);
    person.setLastName(l);
    person.setAddress(a);
    card_Num = cNum;
    credit_Limit = Limit;
    card_Bal = 0;
}



bool CreditCard::makeCharge(double charge)
{
    bool check;using namespace std;
    if (charge <= credit_Limit-card_Bal)
    {
        card_Bal += charge;
        check= true;
    }
    else
    check= false;
    return check;
}
bool CreditCard::payBalance(double pay_Bal)
{
    bool check;
    if (pay_Bal > 0)
    {
        card_Bal -= pay_Bal;
        check= true;
    }
    else
    check= false;
    return check;
}
void CreditCard::setCreditLimit(double credit_L)
{
    credit_Limit = credit_L;
}

