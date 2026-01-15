//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
 class parent{
    public:
    ~parent(){
        cout<<"this is parent destructor"<<endl;

    }
 } ;
 class child : public parent{
    public:
    ~child(){
        cout<<"this is chlid destructor"<<endl;
    }
 };  
    
    
int main(){
    
  child obj;
  
    
     return 0;
    
}