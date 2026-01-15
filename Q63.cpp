//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class xyz {
    int x=10;
    friend void show(xyz);

 }  ;
 void show(xyz obj){
    cout<<"value of x : "<<obj.x<<endl;

 } 
    
int main(){
    
   xyz obj;
   show(obj); 
     
    
     return 0;
    
}