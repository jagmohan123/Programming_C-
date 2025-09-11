
#include <iostream>
using namespace std;

class Numbers {

public:
	int x,y;
	Numbers(int num1,int num2) {
		x=num1;
		y=num2;
	}
	int maximumOfTwoNo() {
		return max(x,y);
	}
};
int main()
{
	Numbers ob1(10,20);

	int bigNo=ob1.maximumOfTwoNo();
	cout<<"The maximum number is "<<bigNo<<endl;

	return 0;
}


