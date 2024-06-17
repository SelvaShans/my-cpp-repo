#ifndef __ASIANATM_H_
#define __ASIANATM_H_

#include <iostream>
#include "../ATM/ATM.h"
using namespace std;

class AsianATM :  public ATM
{
  public:
    AsianATM() {}
    virtual ~AsianATM() {}
    void paymentMethod() {
      cout<<"You're in Asian ATM interface \n";
    }
};

#endif