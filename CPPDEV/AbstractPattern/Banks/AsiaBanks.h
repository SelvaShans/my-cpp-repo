#ifndef __ASIANBANKS_H_
#define __ASIANBANKS_H_

#include <iostream>
#include "../Banks/Banks.h"
using namespace std;

class AsianBanks :  public Banks
{
  public:
    AsianBanks() {}
    virtual ~AsianBanks() {}
    void paymentMethod() {
      cout<<"You're in Asian Banks interface \n";
    }
};

#endif