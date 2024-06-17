#ifndef __EUROPEATM_H_
#define __EUROPEATM_H_

#include <iostream>
#include "../ATM/ATM.h"
using namespace std;

class EuropeATM :  public ATM
{
  public:
    EuropeATM() {}
    virtual ~EuropeATM() {}
    void paymentMethod() {
      cout<<"You're in Europe ATM interface \n";
    }
};

#endif