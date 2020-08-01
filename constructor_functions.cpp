#include<iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        };

        Book(string aTitle, string aAuthor, int aPages){
            cout << "Creating Object" << endl;
            cout << aTitle << endl;
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        } // Constrcutor function is called everytime an object is created
};



int main(){

    Book book1("Harry Potter", "JK Rowling", 500);

    Book book2("Lord of the Rings", "JRR Tolkien", 700);

    Book book3;

    cout << book1.author << endl;
    cout << book2.pages << endl;
    cout << book3.author << endl;

    return 0;
}