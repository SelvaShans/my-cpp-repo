#ifndef __EUROPE_H_
#define __EUROPE_H_

#include "../Region.h"
#include "../ATM/EuropeATM.h"
#include "../Banks/EuropeBanks.h"
#include "../Ecommerce/EuropeEcommerce.h"
#include "../NFC/EuropeNFC.h"
#include "../UPI/EuropeUPI.h"

class Europe : public Region
{
  public:
    ATM *placeofATMTransaction()
    {
      return new EuropeATM;
    }
    Banks *placeofBanksTransaction()
    {
      return new EuropeBanks;
    }
    Ecommerce *placeofEcommerceTransaction()
    {
      return new EuropeEcommerce;
    }
    UPI *placeofUPITransaction() {
      return new EuropeUPI;
    }
    NFC *placeofNFCTransaction() {
      return new EuropeNFC;
    }
};

#endif