#ifndef __AMERICAATM_H_
#define __AMERICAATM_H_

#include <iostream>
#include "../ATM/ATM.h"
using namespace std;

class AmericaATM :  public ATM
{
  public:
    AmericaATM() {}
    virtual ~AmericaATM() {}
    void paymentMethod() {
      cout<<"You're in AMERICA ATM interface \n";
    }
};

#endif