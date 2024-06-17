#ifndef __REGION_H_
#define __REGION_H_

#include "ATM/ATM.h"
#include "Banks/Banks.h"
#include "Ecommerce/Ecommerce.h"
#include "UPI/UPI.h"
#include "NFC/NFC.h"

#include <string.h>

class Region
{
  public:
    virtual ATM *placeofATMTransaction();
    virtual Banks *placeofBanksTransaction();
    virtual Ecommerce *placeofEcommerceTransaction();
    virtual UPI *placeofUPITransaction();
    virtual NFC *placeofNFCTransaction();
    static Region *CreateInstance(std::string region);
};

#endif