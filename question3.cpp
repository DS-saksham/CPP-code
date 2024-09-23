// You are developing a system to manage a library's book inventory. Each book in the library has a unique ID, a title, and an author. You need to keep track of the total number of books in the library.

// To achieve this, you need to design a Book class that includes:

//  A private static data member to keep track of the total number of books.
// A constructor that increments this static count every time a new Book object is created.
// A static member function that returns the total number of books.
// An instance method to display the book's details.

#include <iostream>
#include <string>

class Book
{
private:
    std::string title;
    std::string author;
    int id;
    static int count;

public:
    Book(std::string title = " ", std::string author =" ", int id =0)
    {
        this->title = title;
        this->author = author;
        this->id = id;
        count++;
    }

  
   static int totalbooks(){
        return count;
    }

    friend void getdata(Book &obj, std::string Title, std::string author, int id);
    friend void display(Book &obj);
};
void getdata(Book &obj, std::string Title, std::string author, int id)
{
    obj.title = Title;
    obj.author = author;
    obj.id = id;
}

void display(Book &obj){
    std::cout << "The title of the book is::: " <<obj.title << std::endl;
    std::cout << "The author of the Book is::: " << obj.author << std::endl;
    std::cout << "The book number is::: " << obj.id << std::endl;
    std::cout << "--------------------------------------" << std::endl;
}

int Book::count =0;

int main(){
    Book book1, book2, book3, book5 ;
    std::cout << "The total no of Books is:::" << Book::totalbooks();
}