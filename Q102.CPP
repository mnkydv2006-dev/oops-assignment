//NAME : MAYANK KUMAR YADAV
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class base{
    public:
     virtual ~base(){
        cout<<":-This is base destructor"<<endl;

    }
 } ;
 class derived : public base{
    public:
     ~derived(){
        cout<<":-This is derived destructor"<<endl;
    }
 };        
    
int main(){
    
   base *b=new derived();
    delete b;
     return 0;
    
}