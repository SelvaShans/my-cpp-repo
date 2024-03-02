#ifndef __UPI_H_
#define __UPI_H_

#include <iostream>
using namespace std;
class UPI
{
  public:
    UPI () {}
    virtual ~UPI() {}
    virtual void paymentMethod() {
      cout<<"You're in UPI interface \n";
    }
};

#endif