//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
 
class student{
    string name;
    int roll;
    public:
    student (){
        // default constructors
        name="unknown";
        roll=0;
    }
    void show(){
        cout<<"the student name "<< name << " has roll no.- "<< roll<<endl;
    }
};
    
    
int main(){
   student s1;
   // default constructors calling
   s1.show();
    
    
     
    
     return 0;
    
}