//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34

#include <iostream>
using namespace std;
int main (){

    //programe to check if a number is +ve, -ve or zero
    int num;
    cout <<"enter your number :";
    cin>>num;
    if(num>0){
        cout<<num <<" is a positive number."<<endl;
    }
    else if(num<0){
        cout<<num<<" is a negative number."<<endl;
        
    }
    else{
        cout<<num<<" is zero."<<endl;

    }
    return 0;
}