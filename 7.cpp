//Operator overloading
#include <iostream>
class complex{
    private:
    int a,b,c;
    public:
    complex(){
        a=5;
        b=7;
    }
    void getvalue(){
        std::cout << "Enter two numbers";
        std::cin >> a >> b;
    }
    void operator++(){
        a=a+1; b=b+1;
    }

    void display(){
        std::cout << "The value of a and b are \t" << a << ",  " << b << std::endl; 
    }
};

int main(){
    complex obj;
    ++obj;
    obj.display();
}