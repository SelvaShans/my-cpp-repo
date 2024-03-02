#ifndef _EUROPEUPI_H
#define _EUROPEUPI_H

#include <iostream>
#include "../UPI/UPI.h"
using namespace std;

class EuropeUPI :  public UPI
{
  public:
    EuropeUPI() {}
    virtual ~EuropeUPI() {}
    void paymentMethod() {
      cout<<"You're in Europe UPI interface \n";
    }
};

#endif