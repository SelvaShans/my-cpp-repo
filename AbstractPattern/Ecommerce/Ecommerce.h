#ifndef __ECOMMERCE_H_
#define __ECOMMERCE_H_

#include <iostream>
using namespace std;
class Ecommerce
{
    public:
        Ecommerce () {}
        virtual ~Ecommerce() {}
        virtual void paymentMethod() {
            cout<<"You're in Ecommerce interface \n";
        }
};

#endif