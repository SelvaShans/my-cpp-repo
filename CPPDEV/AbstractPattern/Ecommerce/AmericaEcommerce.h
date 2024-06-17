#ifndef __AMERICAECOMMERCE_H_
#define __AMERICAECOMMERCE_H_

#include <iostream>
#include "../Ecommerce/Ecommerce.h"
using namespace std;

class AmericaEcommerce :  public Ecommerce
{
  public:
    AmericaEcommerce() {}
    virtual ~AmericaEcommerce() {}
    void paymentMethod() {
      cout<<"You're in AMERICA Ecommerce interface \n";
    }
};

#endif