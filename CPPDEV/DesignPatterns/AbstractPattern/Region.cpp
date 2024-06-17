#include "ATM/ATM.h"
#include "Banks/Banks.h"
#include "Ecommerce/Ecommerce.h"
#include "UPI/UPI.h"
#include "NFC/NFC.h"
#include "Region.h"
#include "Region/Asia.h"
#include "Region/America.h"
#include "Region/Europe.h"

#include "string.h"

ATM *Region::placeofATMTransaction() {
  cout<<"Iam default place of ATM \n";
  return new ATM;
}

Banks *Region::placeofBanksTransaction() {
  cout<<"Iam default place of Banks \n";
  return new Banks;
}

Ecommerce *Region::placeofEcommerceTransaction() {
  cout<<"Iam default place of Ecommerce \n";
  return new Ecommerce;
}

UPI *Region::placeofUPITransaction() {
  cout<<"Iam default place of UPI \n";
  return new UPI;
}

NFC *Region::placeofNFCTransaction() {
  cout<<"Iam default place of NFC \n";
  return new NFC;
}

Region *Region::CreateInstance(std::string region) {
  if (region == "Asia")
    return new Asia;
  else if (region == "America")
    return new America;
  else if (region == "Europe")
    return new Europe;
  else
    return new Region;
}