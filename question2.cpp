// Implementation of the static members function and static members variable

#include <iostream>

class Counter {
private:
    static int count;  // Static member variable

public:
    // Static member function
    static void increment() {
        ++count;
    }

    // Static member function
    static int getCount() {
        return count;
    }
};

// Definition of static member variable
int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::increment();
    
    std::cout << "Count: " << Counter::getCount() << std::endl;  // Outputs: Count: 2
    
    return 0;
}
