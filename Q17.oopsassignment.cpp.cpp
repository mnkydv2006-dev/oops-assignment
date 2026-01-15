//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34

#include <iostream>
using namespace std;
int main(){

    cout<<"conditional operator demonstration"<<endl;
    int num1, num2, max;
    cout<<"Enter two numbers:- ";
    cin>>num1>>num2;
    max = (num1 > num2) ? num1 : num2;
    cout<<"Maximum of "<<num1<<" and "<<num2<<" is "<<max<<endl;    
    return 0;

}