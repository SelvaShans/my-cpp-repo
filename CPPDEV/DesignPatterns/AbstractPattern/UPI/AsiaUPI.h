#ifndef _ASIAUPI_H
#define _ASIAUPI_H

#include <iostream>
#include "../UPI/UPI.h"
using namespace std;

class AsiaUPI :  public UPI
{
  public:
    AsiaUPI() {}
    virtual ~AsiaUPI() {}
    void paymentMethod() {
      cout<<"You're in Asia UPI interface \n";
    }
};

#endif