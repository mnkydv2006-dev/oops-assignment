//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;

class employee{
    public:
     int id;

     void getid(){
       id=1002;
    }
};

class payroll : public employee{
    public:
    int salary ;
    void calculate(){
       salary=20000;
    }
void show (){
    cout<<"the employee id  is : "<<id<<endl;
    cout<<"the payroll is : "<< salary <<endl;
}
};   
    
int main(){
    
   payroll obj;
   obj.getid();
   obj.calculate();
   obj.show(); 
     
    
     return 0;
    
}
