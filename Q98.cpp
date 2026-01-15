//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class parent{
    public:
     virtual void show(){
        cout<<"this is parent class"<<endl;

    }
 } ;
 class child : public parent{
    public:
    void show(){
        cout<<"this is chlid class"<<endl;
    }
 };     
    
int main(){
  
    parent *p;
    child c;
    p=&c;
    p->show();
    
     
    
     return 0;
    
}