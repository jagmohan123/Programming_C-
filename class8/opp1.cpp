#include <iostream>
using namespace std;
class Person{
    public:
    int x=10;
    void valueOfX(){
        cout<<"The value of x is "<<x<<endl;
    }
    
     int valueOfXViaReturn(){
        return x;
    }
    
};
class Person1{
  // via default private access specifier lag gya ab class ke function ya variables ko class
  // ke bahar access nhi kar sakta 
    int x1=10;
    void valueOfX(){
        cout<<"The value of x is "<<x1<<endl;
    }
    
};
int main() {
    Person ob;
    Person1 ob1;
    // cout<<" x kee value jo class ke andar bna hai===>"<<ob.x<<endl;
    // ob.valueOfX();
    int ans=ob.valueOfXViaReturn();
    cout<<"the return value of x in ans"<<ans<<endl;
    // // cout<<" x1 kee value jo class ke andar bna hai===>"<<ob1.x1<<endl;
    // ob1.valueOfX();
    
    return 0;
}