//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
  
class A{
    int x=10;
    friend class B;

};
class B{
    public:
    void show(A obj1){
        cout<<"value  of x : "<<obj1.x<<endl;
    } 
};
    
    
int main(){
 
    A a; // here the object is different but it doesn't matter don't know why ?
    B b;
    b.show(a);
    
     
    
     return 0;
    
}