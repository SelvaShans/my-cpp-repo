#include <iostream>
#include "ATM/ATM.h"
#include "Banks/Banks.h"
#include "Ecommerce/Ecommerce.h"
#include "Region.h"
#include "UPI/UPI.h"
#include "NFC/NFC.h"

using namespace std;

int main()
{
  string region;
  cout <<"Enter from which region your :" << endl;
  cout <<"Asia/Europe/America" << endl;
  cin >> region;

  Region *reg = Region::CreateInstance(region);
  ATM *atm = reg->placeofATMTransaction();
  Banks *bank = reg->placeofBanksTransaction();
  Ecommerce *ecomm = reg->placeofEcommerceTransaction();
  NFC *nfc = reg->placeofNFCTransaction();
  UPI *upi = reg->placeofUPITransaction();

  atm->paymentMethod();
  bank->paymentMethod();
  ecomm->paymentMethod();
  nfc->paymentMethod();
  upi->paymentMethod();

  return 0;
}