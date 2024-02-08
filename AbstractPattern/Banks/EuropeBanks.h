#ifndef __EUROPEBANKS_H_
#define __EUROPEBANKS_H_

#include <iostream>
#include "../Banks/Banks.h"
using namespace std;

class EuropeBanks :  public Banks
{
  public:
    EuropeBanks() {}
    virtual ~EuropeBanks() {}
    void paymentMethod() {
      cout<<"You're in Europe Banks interface \n";
    }
};

#endif