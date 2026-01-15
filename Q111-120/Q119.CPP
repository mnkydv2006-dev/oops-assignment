//NAME : MAYANK YADAV
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
 class cart{
    int price;
    string item;
    public:
    void getData(){
        price = 651;
        item = "Shopping Cart";
    }
    void showData(){
        cout<<"price :- "<<price<<endl;
        cout<<"Cart item:- "<<item<<endl;
    }
};
    
    
int main(){
    
     cart c;
     c.getData();
     c.showData();
    
     
    
     return 0;
    
}