#ifndef __AMERICABANKS_H_
#define __AMERICABANKS_H_

#include <iostream>
#include "../Banks/Banks.h"
using namespace std;

class AmericaBanks :  public Banks
{
  public:
    AmericaBanks() {}
    virtual ~AmericaBanks() {}
    void paymentMethod() {
      cout<<"You're in AMERICA Banks interface \n";
    }
};

#endif