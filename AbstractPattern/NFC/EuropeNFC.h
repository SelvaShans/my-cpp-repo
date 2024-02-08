#ifndef _EUROPENFC_H
#define _EUROPENFC_H

#include <iostream>
#include "../NFC/NFC.h"
using namespace std;

class EuropeNFC :  public NFC
{
  public:
    EuropeNFC() {}
    virtual ~EuropeNFC() {}
    void paymentMethod() {
      cout<<"You're in Europe NFC interface \n";
    }
};

#endif