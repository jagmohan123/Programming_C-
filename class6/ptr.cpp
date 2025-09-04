// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int age=11;// age ka address 10000
   int *pAge=&age;//10000 pointer ka khud ka address 800000
   cout<<"The value of age variable"<<age<<endl;//101
   cout<<"The address of age variable"<<&age<<endl;//10000
   cout<<"The value of age without using age Variable"<<*pAge<<endl;//101
   cout<<"The address of age variable without &age is"<<pAge<<endl;//10000
   cout<<"The address of pointer variable *pAge is"<<&pAge<<endl;//8000000
    return 0;
}