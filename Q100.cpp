//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class shape{
    public:
     virtual void draw()=0; //pure virtual
 } ;
 class circle : public shape{
    public:
    void draw(){
        cout<<"draw circle"<<endl;
    }
 };     
    
int main(){
  
    shape *s;
   circle c;
    s=&c;
    s->draw();
    
     
    
     return 0;
    
}