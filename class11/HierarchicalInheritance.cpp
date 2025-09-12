#include <iostream>
using namespace std;
//Hierarchical Inheritance 


class ScienceStream{
  
  public:
  void Chemistry(){
    cout<<"Chemistry Sumbject"<<endl;
  }
  void Physics(){
    cout<<"Physics Sumbject"<<endl;
  } 
  void English(){
    cout<<"English Sumbject"<<endl;
  }  
void Hindi(){
    cout<<"Hindi Sumbject"<<endl;
  }
  void Math(){
    cout<<"Math Sumbject"<<endl;
  }
  
};


class BoyStudent: public ScienceStream{
  public:
  void Study(){
    cout<<"Boys are studing Science Stream"<<endl;
  }
  
};

class girlStudent: public ScienceStream{
  public:
  void Study(){
    cout<<"Girls are studing Science Stream"<<endl;
  }
};

int main() 
{ 
ScienceStream s1;
s1.Physics();
s1.Chemistry();
BoyStudent B1;
B1.Physics();
B1.Chemistry();
girlStudent G1;
G1.Physics();
G1.Chemistry();
   
    return 0;
}