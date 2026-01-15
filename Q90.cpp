//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
 
class father{
    public:
    void show(){
        cout<<"this is father class"<<endl;

    }
 } ;
 class mother {
    public:
    void show(){
        cout<<"this is mother class"<<endl;
    }
 }; 
  
 class child : public father , public mother{

 };
    
int main(){
    
  child obj;
  obj.father::show();
  obj.mother::show();
   // obj.father::show();//error : ambiguity or confusion solved .....
    
     return 0;
    
}