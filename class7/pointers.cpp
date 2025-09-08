// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

	int x=10;
	x=190;
	int *ptrX=&x;
	*ptrX=1000;
// int *ptrX=19894;
//   int *ptrX=x;// You are trying to store integer value in pointer but it store the address that why our code will be giving an error
	cout<<"the value of x is "<<x<<endl;//10
	cout<<"the value of x  via pointer "<<*ptrX<<endl;//10
	cout<<"the address of x is "<<&x<<endl;//x ka address
	cout<<"the address of x via pointer is  "<<ptrX<<endl;//x ka address
	cout<<"the address of pointer Itself  is  "<<&ptrX<<endl;//pointer ka khud ka address
// Online C++ compiler to run C++ program online
#include <iostream>
	using namespace std;
	int main() {

//   int x=10;
//   x=190;
//   int *ptrX=&x;
//   *ptrX=4735;
//   int **nestedPtr=&ptrX;
//   **nestedPtr=4598;
//   nestedPtr=&x;
//     // int **nestedPtr=ptrX;
//   cout<<"the value of x is "<<x<<endl;//10
//   cout<<"the value of x  via pointer "<<*ptrX<<endl;//10
//     cout<<"the value of x  via nested pointer "<<**nestedPtr<<endl;//10

//   cout<<"the address of x is "<<&x<<endl;//x ka address
//   cout<<"the address of x via pointer is  "<<ptrX<<endl;//x ka address

//   cout<<"the address of x  via Nested Pointer  is  "<<nestedPtr<<endl;//pointer ka khud ka address
//   cout<<"the address of x  via Nested Pointer  is  "<<&nestedPtr<<endl;//pointer ka khud ka address



		int grow=45;
		int *ptrGrow=&grow;
		int **ptrptrGrow=&ptrGrow;
		int ***ptrptrptrGrow=&ptrptrGrow;
		cout<<grow<<endl;
		cout<<*ptrGrow<<endl;
		cout<<**ptrptrGrow<<endl;
		cout<<***ptrptrptrGrow<<endl;

		***ptrptrptrGrow=6538;

		cout<<grow<<endl;
		cout<<*ptrGrow<<endl;
		cout<<**ptrptrGrow<<endl;
		cout<<***ptrptrptrGrow<<endl;


		cout<<&grow<<endl;
		cout<<ptrGrow<<endl;
		cout<<&ptrGrow<<endl;
		cout<<ptrptrGrow<<endl;

		cout<<&ptrptrGrow<<endl;
		cout<<ptrptrptrGrow<<endl;
		cout<<&ptrptrptrGrow<<endl;





		return 0;
	}
	return 0;
}