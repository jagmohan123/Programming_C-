#include <iostream>
using namespace std;
#define PI 4.12
int main()
{
    // int R;
    // cout << "Enter the redius of circle" << endl;
    // cin >> R;
    // cout << "Area of circle is " << ( PI * R * R);
    
    //implicit direct assign one data type value to the other data type value
    
    // int x;
    // float y;
    // cin>>y;
    // cout<<"Y is "<<y<<endl;
    // x=y;
    // cout<<"X is "<<x<<endl;
    
    
    // float x1;
    // int  y1;
    // cin>>y1;
    // cout<<"Y1 is "<<y1<<endl;
    // x1=y1;
    // cout<<"X is "<<x1<<endl;
    
   
    
    //H.W 
    
    
    //explicit data type conversion hota hai
    //aap ek data type ko force fully dusre data type me convert karte hai
    double age=97.99999;
    int d=age;
    cout<<"Implicit conversion=>"<<d<<endl;
    
    int f=(int)age;
    cout<<"Explicit type conversion=>"<<f<<endl;
    
    
    return 0;
}