//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class demo{
    public:
    static int count;
 } ;
 
 int demo::count=0;
    
int main(){
    
    demo a,b;
    demo::count=5;

    cout<<"cout value: "<< demo::count<<endl;
    
     
    
     return 0;
    
}