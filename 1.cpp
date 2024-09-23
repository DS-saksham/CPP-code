#include <iostream>
void add (const int &a, const int & b, int & result){
    result = a+b;

}

int main(){
    int x =5, y =7 , z;
    add(x,y,z);
    std::cout << "The sum of the numbers is " << z;
}