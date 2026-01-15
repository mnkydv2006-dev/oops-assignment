//NAME : MAYANK KUMAR YADAV
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class base{
    public:
     void show(){
        cout<<":-This is base show"<<endl;

    }
 } ;
 class derived : public base{
    public:
     void show(){
        cout<<":-This is derived show"<<endl;
    }
 };        
    
int main(){
    
   derived obj;
   obj.show();
  return 0;
    
}