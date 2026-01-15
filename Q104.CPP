//NAME :MAYANK KUMAR YADAV
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class base{
    public:
     virtual void print(){
        cout<<":-This is base print"<<endl;

    }
 } ;
 class derived : public base{
    public:
     void print(){
        cout<<":-This is derived print"<<endl;
    }
 };        
    
int main(){
    
    base *b;
    derived d;
    b =&d;
    b->print();

    return 0;
    
}