//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
class A{
    public:
    int x=10;
}  ;

class B : virtual public A{
};
class C : virtual public A{
};
class D : public B , public C {
};
    
    
int main(){
    
  D obj;
  cout<<"value of x : "<< obj.x <<endl; 
     
    
     return 0;
    
}
