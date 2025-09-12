#include <iostream>
using namespace std;
//Multilevel Inheritance 


class IndianGovt{
   public:
   void EarnignMoreThanSixLacks(){
     cout<<"You must pay the Income TAX"<<endl;
   }
  
};

class RBIBank:public IndianGovt{
  public:
   void withrowAmountLimit(){
     cout<<"Customer is allowed to withrow only 1 lack in a Day"<<endl;
   }
  void FDRATE(){
     cout<<"Customer above 18 is available for FD will get the intrust of 7.5%"<<endl;
   }
};

class ICICIBank:public RBIBank{
   public:
   void PrimimumCustomerWithrownAmountLimit(){
     cout<<"Customer is allowed to withrow only 5 lack in a Day due to special account holder in ICICI Bank"<<endl;
   }
  
};

int main() 
{ 
IndianGovt Ind1;
RBIBank ROb;
ICICIBank IOb;
ROb.withrowAmountLimit();
ROb.FDRATE();
Ind1.EarnignMoreThanSixLacks();
ROb.EarnignMoreThanSixLacks();

   
IOb.PrimimumCustomerWithrownAmountLimit();
IOb.withrowAmountLimit();
IOb.EarnignMoreThanSixLacks();
   
    return 0;
}