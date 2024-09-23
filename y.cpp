#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string name = "", int age = 0) : name(name), age(age) {}
    virtual ~Person() {}

    virtual void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

// Intermediate class Employee inheriting from Person
class Employee : virtual public Person {
protected:
    std::string employeeID;

public:
    Employee(std::string name = "", int age = 0, std::string employeeID = "")
        : Person(name, age), employeeID(employeeID) {}
    virtual ~Employee() {}

    void displayInfo() const override {
        Person::displayInfo();
        std::cout << "Employee ID: " << employeeID << std::endl;
    }
};

// Intermediate class Student inheriting from Person
class Student : virtual public Person {
protected:
    std::string studentID;
    std::string major;

public:
    Student(std::string name = "", int age = 0, std::string studentID = "", std::string major = "")
        : Person(name, age), studentID(studentID), major(major) {}
    virtual ~Student() {}

    void displayInfo() const override {
        Person::displayInfo();
        std::cout << "Student ID: " << studentID << std::endl;
        std::cout << "Major: " << major << std::endl;
    }
};

// Class TeachingAssistant inheriting from both Employee and Student
class TeachingAssistant : public Employee, public Student {
protected:
    std::string department;

public:
    TeachingAssistant(std::string name = "", int age = 0, std::string employeeID = "", std::string studentID = "", std::string major = "", std::string department = "")
        : Person(name, age), Employee(name, age, employeeID), Student(name, age, studentID, major), department(department) {}
    virtual ~TeachingAssistant() {}

    void displayInfo() const override {
        Student::displayInfo();  // Calling Student's displayInfo
        Employee::displayInfo(); // Calling Employee's displayInfo
        std::cout << "Department: " << department << std::endl;
    }
};

// Derived class GraduateTeachingAssistant
class GraduateTeachingAssistant : public TeachingAssistant {
private:
    std::string thesisTitle;

public:
    GraduateTeachingAssistant(std::string name = "", int age = 0, std::string employeeID = "", std::string studentID = "", std::string major = "", std::string department = "", std::string thesisTitle = "")
        : TeachingAssistant(name, age, employeeID, studentID, major, department), thesisTitle(thesisTitle) {}
    virtual ~GraduateTeachingAssistant() {}

    void displayInfo() const override {
        TeachingAssistant::displayInfo(); // Calling TeachingAssistant's displayInfo
        std::cout << "Thesis Title: " << thesisTitle << std::endl;
        std::cout << "The name of our writer is:: " << name;
    }
};

int main() {
    GraduateTeachingAssistant gta("Alice Smith", 30, "E123", "S456", "Computer Science", "AI Lab", "Deep Learning for NLP");
    gta.displayInfo();
    return 0;
}
