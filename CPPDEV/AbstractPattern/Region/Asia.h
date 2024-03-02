#ifndef __ASIA_H_
#define __ASIA_H_

#include "../Region.h"
#include "../ATM/AsiaATM.h"
#include "../Banks/AsiaBanks.h"
#include "../Ecommerce/AsiaEcommerce.h"
#include "../UPI/AsiaUPI.h"

class Asia : public Region
{
  public:
    ATM *placeofATMTransaction()
    {
      return new AsianATM;
    }
    Banks *placeofBanksTransaction()
    {
      return new AsianBanks;
    }
    Ecommerce *placeofEcommerceTransaction()
    {
      return new AsianEcommerce;
    }
    UPI *placeofUPITransaction()
    {
      return new AsiaUPI;
    }
};

#endif