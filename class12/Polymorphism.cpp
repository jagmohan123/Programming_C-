#include <iostream>
using namespace std;
// ***************Function OverLoading*************************
// class FunctionOverLoading{

//   public:
//   int sum(int x, int y){
//     return x+y;
//   }

//     int sum(int x, int y,int z){
//     return x+y+z;
//   }
//     float sum(float x, int y){
//     return x+y;
//   }
//     float sum(int x, float y){
//     return x+y;
//   }

// };



//2nd type of compile Time polymorphism
//******************Operator OverLoading


// class ComplexNumber{

//   float realNo, imagenaryNo;
//   public:
//   ComplexNumber(float r, float i){
//     realNo=r;
//     imagenaryNo=i;
//   }

//   // special syntex of Operator OverLoading
//   ComplexNumber operator +(ComplexNumber &value){

//   // i wanna perform sum of two no.
//   // 3+i, 4+i == 7+2i
//   return ComplexNumber(realNo+value.realNo, imagenaryNo+value.imagenaryNo);
//   }


//   void showResult(){
//     cout<<realNo<<"+"<<"i"<<imagenaryNo<<endl;
//   }


// };



//Runtime polymorphism

//Method Overriding

class Parent {
public:
	virtual void showData() =0;
// 	{
// 		cout<<"This is the showData function of parent class"<<endl;
// 	}


};


class Child :public Parent {
public:
	void showData() {
		cout<<"This is the showData function of Child class"<<endl;
	}


};

int main()
{
	// ***************Function OverLoading*************************
	// FunctionOverLoading f1;
	// cout<<"Sum of two no"<<f1.sum(10,20)<<endl;
	//   cout<<"Sum of Three no"<<f1.sum(10,20,30)<<endl;
	//   cout<<"Sum of two no one is float and other is int"<<f1.sum(10.78f,20)<<endl;
	// cout<<"Sum of two no one is int and other is float"<<f1.sum(100,20.78f)<<endl;

	// ComplexNumber C1;// you are nt allowed bcs you made parameterised constructor
	// ComplexNumber C1(3.6f,1.4f);
	// ComplexNumber C2(9.4f,9.6f);

	// ComplexNumber Result=C1+C2;;
	// cout<<6+9<<endl;
	// cout<<"Addition of 2 no."<<endl;
	// Result.showResult();


// 	Parent p1;
// 	Child c1;
// 	p1.showData();
// 	c1.showData();


	Parent *p1=new Child();
	// Child *c1=new Child();//Child c1;




// 	c1->showData();
	p1->showData();
	// c1.showData();

	// Child *c1=new Parent();//error dega bcs child class ko Parent class inherit nhi keaya hai and virtual child class ke andar
// 	Parent *p1=new Child();




	return 0;
}