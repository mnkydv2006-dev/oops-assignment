//NAME : MAYANK KUMAR YADAV
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
class bill{
    int itemId;
    int quantity;
    float price;
    public:
    void getData(){
        itemId = 305;
        quantity = 3;
        price = 145.75;
    }
    void showData(){
        cout<<"Item ID: "<<itemId<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Price: "<<price<<endl;
    } 
};    
    
    
int main(){
    
    bill b;
    b.getData();
    b.showData();
    
     
    
     return 0;
    
}