#include<iostream>
using namespace std;

//no return type with no parameters 
void printMassage(){
    cout<<"I am no return type with no parameters funtion"<<endl;
}

//Return type with no parameter 
int sumOfTwo(){
    //you can make the variable and sum them 
    // int x=90,y=900;
    return 4+7;
}


//Return type with parameters 
int sumOfTwo1(int x, int y){
    //you can make the variable and sum them 
    return x+y;
}


//No Return type with parameter List 
void sumOfTwo2(int x, int y){
    //you can make the variable and sum them 
   cout<<"sum of x and y is"<<x+y<<endl;
}

int main(){
    
    cout<<"we are going to see the variaty of function in c++"<<endl;
    
    // function call of no return type with no parameter
    printMassage();
    
    // function call of  return type with no parameter
    int ans=sumOfTwo();
    cout<<"the answer of return with no parameter function***"<<ans<<endl;
    
    
     // function call of  return type with  parameter
    int ans1=sumOfTwo1(40,6);
    cout<<"the answer of return with  parameters, function***"<<ans1<<endl;
    
        // function call of no return type with  parameters
   sumOfTwo2(40,6);

    
    
    
}