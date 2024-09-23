// Problem: Design a class Book to manage information about books in a library or bookstore. The class should have attributes such as title, author, and ISBN to uniquely identify each book. Implement methods to set these attributes (setTitle, setAuthor, setISBN), get their values (getTitle, getAuthor, getISBN), and display the book's details (displayDetails).

#include <iostream>
#include <string>
class Book{
    private:
    int bookNumber;
    std::string Title , author;

    public:

    Book(std::string Title = "", std::string author = "" , int bookNumber = 0){
        this->Title = Title;
        this->author = author;
        this->bookNumber = bookNumber;
    }
     void setTitle(std::string Title){
        this->Title = Title;
    }
    void setAuthor(std::string author){
        this->author = author;
    }

    void setbookNumber(int bookNumber){
        this->bookNumber = bookNumber;
    }

    void getTitle(){
        std::cout << "The Title of the book is::" << Title << std::endl;
    }
        return bookNumber;

    void getAuthor(){
        std::cout << "The author of the book is::" << author << std::endl;
    }

    void getbookNumber(){
        std::cout << "The book number is::" << bookNumber << std::endl;
    }

    void display(){
        std::cout <<  "Title:: " << Title << std::endl;
        std::cout << "Author:: " << author << std::endl;
        std::cout << "BookNumbers:: " << bookNumber << std::endl;
        std::cout << "---------------------------------\n";
    }

};
void bubbleSort(Book books[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j].getAuthor() > books[j + 1].getAuthor()) {
                // Swap books[j] and books[j+1]
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}


int main(){
   Book book[3];
   int n;
   std::string t, a;
   for(int i =0;i<3;i++){
    std::cout << "Enter the title of the book::: \n";
    std::getline(std::cin,t);
    std::cout << "Enter the name of the author::\n";
    std::getline(std::cin,a);
    std::cout << "Enter the book number:::\n";
    std::cin >> n;
    std::cin.ignore();
    book[i].setTitle(t);
    book[i].setAuthor(a);
    book[i].setbookNumber(n);
   }
system("clear");
bubbleSort(book,3);
   for(int i=0 ;i<3;i++){
    book[i].display();
   }
}