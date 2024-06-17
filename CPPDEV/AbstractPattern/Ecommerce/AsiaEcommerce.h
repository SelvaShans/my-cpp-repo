#ifndef __ASIANECOMMERCE_H_
#define __ASIANECOMMERCE_H_

#include <iostream>
#include "../Ecommerce/Ecommerce.h"
using namespace std;

class AsianEcommerce :  public Ecommerce
{
  public:
    AsianEcommerce() {}
    virtual ~AsianEcommerce() {}
    void paymentMethod() {
      cout<<"You're in Asian Ecommerce interface \n";
    }
};

#endif