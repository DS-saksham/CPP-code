#include <iostream>

class Vector {
private:
    int x, y, z;

public:
    // Constructor
    Vector(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

    // Prefix increment operator overload
    Vector& operator++() {
        x = -x;
        y = -y;
        z = -z;
        return *this;
    }

    // Method to display the vector
    void display() const {
        std::cout << x << ", " << y << ", " << z << std::endl;
    }
};

int main() {
    // Create a Vector object
    Vector v(6, 7, -98);

    // Apply the prefix increment operator
    ++v;

    // Display the updated vector
    std::cout << "Updated Vector: ";
    v.display();

    return 0;
}
