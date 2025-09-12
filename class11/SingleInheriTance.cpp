#include <iostream>
using namespace std;
//SIngle Inheritance 
class RBIBank{
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
RBIBank ROb;
ICICIBank IOb;
ROb.withrowAmountLimit();
ROb.FDRATE();
   
IOb.PrimimumCustomerWithrownAmountLimit();
IOb.withrowAmountLimit();
   
    return 0;
}