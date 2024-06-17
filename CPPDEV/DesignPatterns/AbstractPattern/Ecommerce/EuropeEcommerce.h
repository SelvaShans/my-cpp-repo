#ifndef __EUROPEECOMMERCE_H_
#define __EUROPEECOMMERCE_H_

#include <iostream>
#include "../Ecommerce/Ecommerce.h"
using namespace std;

class EuropeEcommerce :  public Ecommerce
{
  public:
    EuropeEcommerce() {}
    virtual ~EuropeEcommerce() {}
    void paymentMethod() {
      cout<<"You're in Europe Ecommerce interface \n";
    }
};

#endif