#ifndef __BANKS_H_
#define __BANKS_H_

#include <iostream>
using namespace std;
class Banks
{
  public:
    Banks () {}
    virtual ~Banks() {}
    virtual void paymentMethod() {
        cout<<"You're in Banks interface \n";
    }
};

#endif