#include<iostream>

using namespace std;

 //Classes are used to create custom data types using existing base data types
 //The name of a class starts with a Capital letter by convention
class Book {
    public:
        string title;
        string author;
        int pages;
};


int main(){
    //Class is the blueprint - the specification
    //Object is an instance of a Class
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

     Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "JRR Tolkien";
    book2.pages = 700;

    cout << book1.title << endl;
    cout << book2.author << endl;
    
    return 0;
}