#include <iostream>
using namespace std;
class Education {
public:
	int data=190;
	// void getData(){
	//   cout<<"The value of data is "<< data<<endl;
	// }
	// Education(){
	//   cout<<"I am default Constructor"<<endl;
	// }

	//default Constructor
	// Education(int x){
	//   cout<<"I am parameterised Constructor"<<endl;
	// }
	// private:
	// int z;
	// public:
	//   void printValueOfZ(){
	//   cout<<"The value of z is "<< z<<endl;
	// }

	// Education (int value){
	//   z=value;
	// }


	// private:
	// int age;

	// // public:
	// //   Education (int age){
	// //   this->age=age;
	// // }
	// public:
	// Education (int age){
	//   age=age;// u r trying to store age value into age ()
	// }

	//   public:
	//   void printValueOfAge(){
	//   cout<<"The value of age is "<< age<<endl;
	// }


	//Copy Constructor

	// agar tumko kisi existing object/variable kee copy banana ho to aap us time me copy Constructor karte hai

private:
	int Eid;
	int *ptrEid;
public:
	Education(int Eid) {
		this->Eid=Eid;
		ptrEid=new int;
		*ptrEid=Eid;
		cout<<"The value of Eid is "<< Eid<<endl;

	}
	//Copy Constructor

// 	Education (Education  &ob) {
// 		Eid=ob.Eid;
// 		cout<<"Copy Constructor called eid value"<<Eid;

// 	}


	~Education () {
	delete ptrEid;
cout<<"I am destructor"<<endl;
	}

};

int main()
{
	// Education ob1;// this is a way of calling default Constructor

	// ob1.getData();

	// Education ob2(20);// this is a way of calling parameterised Constructor
	// // ob2.getData();
	// ob2.printValueOfZ();

	// Education *ob3=new Education(20);// not use


	//   Education ob4(20);
	// ob4.printValueOfAge();


	//Copy Constructor;
	Education E1(101);
// 	Education E2(E1);
	return 0;
}