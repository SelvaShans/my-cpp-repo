#ifndef __AMERICA_H_
#define __AMERICA_H_

#include "../Region.h"
#include "../ATM/AmericaATM.h"
#include "../Banks/AmericaBanks.h"
#include "../Ecommerce/AmericaEcommerce.h"
#include "../NFC/AmericaNFC.h"

class America : public Region
{
  public:
    ATM *placeofATMTransaction()
    {
      return new AmericaATM;
    }
    Banks *placeofBanksTransaction()
    {
      return new AmericaBanks;
    }
    Ecommerce *placeofEcommerceTransaction()
    {
      return new AmericaEcommerce;
    }
    NFC *placeofNFCTransaction() {
      return new AmericaNFC;
    }
};

#endif