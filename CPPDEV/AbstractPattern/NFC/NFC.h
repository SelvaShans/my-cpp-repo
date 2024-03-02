#ifndef __NFC_H_
#define __NFC_H_

#include <iostream>
using namespace std;
class NFC
{
  public:
    NFC () {}
    virtual ~NFC() {}
    virtual void paymentMethod() {
        cout<<"You're in NFC interface \n";
    }
};

#endif