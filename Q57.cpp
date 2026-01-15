//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class base{
    public:
    base(){
        cout<<"base class constructor"<<endl;

    }
 } ;
 class derived : public base{
    public:
    derived(){
        cout<<" deriveed class constructor"<<endl;

    }
 } ;

    
int main(){
    
    derived obj;
    
     
    
     return 0;
    
}