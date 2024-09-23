#include <iostream>
int main(){
    std::string str;
    std::cout << "Enter a sentence:: ";
    // To get the entire line of the entered string
    
   getline(std::cin, str);
    std::cout << "The entered sentance is :: " << str << std::endl;
}