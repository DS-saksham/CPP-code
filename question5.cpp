#include <iostream>
#include <string>
class person{
protected:
std::string name;
int id;
public:
person(std::string name =" ", int id = 0){
    this->name =name;
    this->id =id;
}
virtual ~person(){}


 virtual void displayinfo(){
    std::cout << "The name is:: " << name << std::endl;
    std::cout << "The id is:; " << id << std::endl;
}
};
/// USE OF VIRTUAL BASE CLASS TO SOLVE THE DIMOND PROBLEME
class student : virtual public person{
    protected:
    std::string major;
    student(std::string name = " ", int id =0, std::string major =" ") : person(name, id){
        this->major = major;
    }

    void displayinfo() override{
        person::displayinfo();
        std::cout << "The major of the student is:: " << major << std::endl;
    }
};

class employee :  virtual public person{
protected:
std::string position;
public:
employee(std::string name = " ", int id= 0 , std::string position =" "):person(name, id){
this->position =position;
}
void displayinfo() override{
    person::displayinfo();
    std::cout << "The Position of the Employee is:: " << position;
}
};

class teachingAssistance :public student , public employee{
    protected:
    std::string department;
    public: 

    // THE BASE CLASS PERSON IS INITIALIZD BY THE MOST DERVIDE CLASS HERE IN THIS CASE IT IS THE TECHINGASSISTANCE
    teachingAssistance(std::string name = " ", int id = 0, std::string major = " " , std::string position =" " ,std::string department =" "): person(name, id),student(name , id ,major), employee(name,id, position){
        this->department = department;
    }

    void displayinfo() override{
        student::displayinfo();
        employee::displayinfo();
        std::cout << "THe department is :: " << department << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;
        std::cout << "The name of the student is " << name;
        std::cout << "The id of the name above mensioned is:: " << id;

    }
};


int main(){
    teachingAssistance t("Saksham Humagain", 12, "Computer", "Ceo" , "Computer Science and Enginnering" );
    t.displayinfo();
}