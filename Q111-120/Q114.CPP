//NAME : MAYANK KUMAR YADAV
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
 class employee{
    int empId;
    string empName;
    public:
    void getData(){
        empId = 501;
        empName = "MAYANK KUMAR YADAV";
    }
    void showData(){
        cout<<"Employee ID:- "<<empId<<endl;
        cout<<"Employee Name:- "<<empName<<endl;
    } 
};  
    
int main(){
    
    employee emp;
    emp.getData();
    emp.showData();

     
    
     return 0;
    
}