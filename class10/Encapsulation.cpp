// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class SBIBank {
private:
	double bankBalance;

public:
	void depositMoney(double money ) {
		bankBalance+=money;// pro tarika
		//bankBalance=bankBalance+money;// ledu tarika
	}

	void withdrowMoney(double money ) {
		bankBalance-=money;// pro tarika
		//bankBalance=bankBalance-money;// ledu tarika
	}

	void balanceEnquery( ) {
		cout<<"My current bank balance is "<<bankBalance<<endl;
	}
};
int main() {
	// Write C++ code here
	SBIBank Rohan;
	// Rohan.bankBalance=100000000000;// completely wrong
	// cout<<"Rohan direct getting the bankBalance info that is wrong"<<Rohan.bankBalance<<endl;//bad way
	// because bankBalance is private u r not access directly to the private variable
	Rohan.balanceEnquery();
	Rohan.depositMoney(12000);
	Rohan.balanceEnquery();
	Rohan.withdrowMoney(478.78);
	Rohan.balanceEnquery();

	return 0;
}