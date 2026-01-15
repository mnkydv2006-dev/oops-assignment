//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class demo{
    public:
    void show () const{
        cout<<"this is constant object"<<endl;

    }
 }  ; 
    
int main(){
    
    const demo obj;
    obj.show();
    
     
    
     return 0;
    
}