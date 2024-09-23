#include <iostream>
#include <string>


class Book{
    private:
    int bookNumber;
    std::string Title , author;

    public:
// Using the Constructor to get the value of the data members
    Book(std::string Title = "", std::string author = "" , int bookNumber = 0){
        this->Title = Title;
        this->author = author;
        this->bookNumber = bookNumber;
    }
    friend void setTitle(Book& obj ,  std::string title);

     friend void setAuthor( Book& obj ,std::string Author);

     friend  void setbookNumber(Book& obj, int BookNumber);

    void getTitle(){
        std::cout << "The Title of the book is::" << Title << std::endl;
    }

    void getAuthor(){
        std::cout << "The author of the book is::" << author << std::endl;
    }

    void getbookNumber(){
        std::cout << "The book number is::" << bookNumber << std::endl;
    }

   friend void display(Book& obj);

};
 
void setTitle( Book& obj , std::string title){
obj.Title = title;
}

void setAuthor(Book& obj ,std::string Author){
    obj.author = Author;
}

 void setbookNumber( Book& obj, int BookNumber){
    obj.bookNumber = BookNumber;
 }

     void display( Book &obj){
        std::cout << "----------------------------------------" << std::endl;
        std::cout <<  "Title:: " << obj.Title << std::endl;
        std::cout << "Author:: " << obj.author << std::endl;
        std::cout << "BookNumbers:: " << obj.bookNumber << std::endl;
        std::cout << "-------------------------------------------------" << std::endl;
    }
 
int main(){
    system("clear");  
    Book book1[3]; 
  
for(int i =0; i<3; i++){
    std::string title, author;
    int no;
    std::cout << "Enter the title of the book::" << std::endl;
    std::getline(std::cin ,title);
    std::cout << "Enter the author of the book:::" << std::endl;
    std::getline(std::cin, author);
    std::cout << "Enter the book number:::" << std::endl;
    std::cin >> no;
    std::cin.ignore();
    setTitle(book1[i],title);
    setAuthor(book1[i], author);
    setbookNumber(book1[i], no);
}


#ifdef _WIN32
    system("cls");
#else
    system("clear");  
#endif



    for(int i=0;i<3;i++){
        display(book1[i]);
      
    }
 
}