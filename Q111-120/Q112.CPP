//NAME :MAYANK KUMAR YADAV 
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 34
    
    
#include<iostream>
using namespace std ;
 
class library{
    int bookId;
    string bookName;
    public:
    void addBook(){
        bookId =201;
        bookName = ":-C++ Programming";
    }
    void showBook(){
        cout<<"Book ID:- "<<bookId<<endl;
        cout<<"Book Name:- "<<bookName<<endl;
    }

};
    
    
int main(){
    
    library lib;    
    lib.addBook();
    lib.showBook();

     
    
     return 0;
}
    
