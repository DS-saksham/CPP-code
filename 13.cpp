#include <iostream>
#include <string>

class Book {
private:
    int bookNumber;
    std::string Title, author;

public:
    Book(std::string Title = "", std::string author = "", int bookNumber = 0) {
        this->Title = Title;
        this->author = author;
        this->bookNumber = bookNumber;
    }

    void setTitle(std::string Title) {
        this->Title = Title;
    }

    void setAuthor(std::string author) {
        this->author = author;
    }

    void setbookNumber(int bookNumber) {
        this->bookNumber = bookNumber;
    }

    std::string getTitle() {
        return Title;
    }

    std::string getAuthor() {
        return author;
    }

    int getbookNumber() {
        return bookNumber;
    }

    void display() {
        std::cout << "Title: " << Title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Book Number: " << bookNumber << std::endl;
        std::cout << "---------------------------------\n";
    }
};

void bubbleSort(Book books[], int n) {
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(books[i].getAuthor()> books[j].getAuthor()){
            Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
        }
    }
}
}

int main() {
    Book book[3];
    int n;
    std::string t, a;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter the title of the book: ";
        std::getline(std::cin, t);
        std::cout << "Enter the name of the author: ";
        std::getline(std::cin, a);
        std::cout << "Enter the book number: ";
        std::cin >> n;
        std::cin.ignore(); // Ignore the newline character left in the buffer
        book[i].setTitle(t);
        book[i].setAuthor(a);
        book[i].setbookNumber(n);
    }

    // Clear the console (optional, but may not work on all systems)
    system("clear");

    // Sort books by author using bubble sort
    bubbleSort(book, 3);

    // Display sorted books
    for (int i = 0; i < 3; i++) {
        book[i].display();
    }

    return 0;
}
