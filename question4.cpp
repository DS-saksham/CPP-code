#include <iostream>
#include <string>

class liberatyItems{
    protected:
    std::string title;
    std::string author;
    public:
    liberatyItems(std::string title = " ", std::string author =" "){
        this->title= title;
        this->author = author;
    }
    void getTitle(){
        std::cout << "The title of the book is:: " << title;
    }

    void display(){
        std::cout << "The title is:: " << title << std::endl;
        std::cout << "The author is:: " << author << std::endl;
    }
    std::string getAuthor(){
        return author;
    }
    
};

class Book : public liberatyItems{
protected:
int noofPages;
public:
Book(std::string title = " ", std::string author= " ", int noofPages = 0):liberatyItems(title, author)
{
this->noofPages = noofPages;
}

void display(){
    std::cout << "\nTitle:: " << title;
    std::cout << "\nAuthor:: " << author;
    std::cout << "\nNo of Pages:: " << noofPages << std::endl;
}
};

class magazine : public liberatyItems{
    protected:
    int issueNumber; 
    public:
    magazine(std::string title = " ", std::string author = " ", int issueNumber= 0):liberatyItems(title,author ){
        this->issueNumber = issueNumber;
    }
void display(){
    std::cout << "\nTitle:: " << title;
    std::cout << "\nAuthor:: " << author;
    std::cout << "\nThe issue number of the magazine is :: " << issueNumber << std::endl;
}


};


int main(){
    Book b1("The rich dad and a poor dad" , "Robert kiwosakki" ,234);
    Book b1("The rich dad and a poor dad" , "Abert kiwosakki" ,234);

    b1.display();
    liberatyItems l("Saksham" ,"Humagain");
    l.display();
    magazine m("HotNews", "Kantipur " ,45);
    m.display();
    
}

