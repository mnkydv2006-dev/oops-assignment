//NAME : MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 34
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << &num << endl;
    cout << "Value stored in pointer = " << ptr << endl;
    cout << "Value pointed by pointer = " << *ptr << endl;

    return 0;
}
