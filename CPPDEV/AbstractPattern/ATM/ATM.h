#ifndef __ATM_H_
#define __ATM_H_

#include <iostream>
using namespace std;
class ATM
{
  public:
    ATM () {}
    virtual ~ATM() {}
    virtual void paymentMethod() {
      cout<<"You're in ATM interface \n";
    }
};

#endif