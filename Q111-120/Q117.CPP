//NAME : MAYANK KUMAR YADAV
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    
class product{
    int prodId;
    string prodName;
    public:
    void getData(){
        prodId = 601;
        prodName = "TV";
    }
    void showData(){
        cout<<"Product ID:-"<<prodId<<endl;
        cout<<"Product Name:-"<<prodName<<endl;
    } 
};    
    
int main(){
    
    product p;
    p.getData();
    p.showData();
    
    
     return 0;
    
}