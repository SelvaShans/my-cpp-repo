#ifndef __AMERICANFC_H
#define __AMERICANFC_H

#include <iostream>
#include "../NFC/NFC.h"
using namespace std;

class AmericaNFC :  public NFC
{
  public:
    AmericaNFC() {}
    virtual ~AmericaNFC() {}
    void paymentMethod() {
      cout<<"You're in America NFC interface \n";
    }
};

#endif