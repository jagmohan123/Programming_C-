#include<iostream>
using namespace std;


//function declartion
// int multiplyOfTwoNo(int x, int y);



// function declaration along with definition
// int sumOfTwoNo(int x, int y){
//     return x+y;
// }

//inline function (agar aapke function ke andar single line ka code hai
// to app us function ko inline bna do because inline function very fast excute hote hai jis program kee efficiency increase ho jati )


//inline function ke andar kabhi bhi loops , if else, nested function nhi bna sakte hai

// inline int queueOfN(int n){

//  // inline funtion ke andar loop ka use nhi karna chaheaye
//  for(int i=0;i<7;i++){
//      cout<<i<<endl;
//  }
//     return n*n*n;
// }


// function overloading -> jab me do function same name se banata hu lekin dono function ke andar parameter list alag hoti hai ya parameter list ke return type different hote hai use function overloading.

// float sumOfFloatNumbers(float x, float y){
//     return x+y;
// }

// float sumOfFloatNumbers(float x, float y){
//     return x+y+z;
// }

// int Sum(int x,float y){
//     return x+y;
// }

// int Sum(float x,int y){
//     return x+y;
// }


// function declaration along with definition with default parameter

// agar jab bhi argument list pass karte ho to default parameter kee value terminate ho jati hai or unme aapke argument vali value store ho jati hai
// long getSum(int x,int y=10){
//     return x+y;
// }



// Recursion Function-> jab ek function apni body ke andar apne aap ko hee call karta hai tab use recursion bolte hai
//When a function calls itself.

// void showMsg(){
//     cout<<"msg call ho rha hai"<<endl;
//     //again same function call kar deaya hai
//     showMsg();
// }


int main() {

	//Default parameter function

	// int ans23=getSum(7);
	// cout<<"Getsum function value "<<ans23<<endl;

	//Recursion Function
	// showMsg();
























	// cout<<"class-5"<<endl;
	// int a,b;
	// cout<<"Enter the value of a and b"<<endl;
	// cin>>a>>b;
	// int ans=sumOfTwoNo(a,b);
	// // int multiply=multiplyOfTwoNo(a,b);
	// // cout<<multiply<<endl;
	// cout<<"Sum of "<<a<<"and "<<b<<" is"<<ans<<endl;

	// int n=13;
	// int queue=queueOfN(n);
	// cout<<"Que of 3 is "<<queue<<endl;


	// float ans1=sumOfFloatNumbers(2.7,3);
	// cout<<ans1<<endl;

	// float ans2=sumOfFloatNumbers(2,3.7,5);
	// cout<<ans2<<endl;


	return 0;;

}


//thie is the definition of above function

// int multiplyOfTwoNo(int x, int y){
// cout<<"hey";
// return 0;
// }
