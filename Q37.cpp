//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
    

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of string = " << length;
    return 0;
}

    