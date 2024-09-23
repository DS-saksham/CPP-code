#include <iostream>
class Vector{
    private:
    int x,y,z;
    public:
    Vector(int x=0, int y=0, int z =0){
        this->x=x;
        this->y=y;
        this->z=z;
    }

      Vector operator++(){
        return Vector(-x,-y,-z);
    }

    void display(){
        std::cout << x << "," << y << "," << z << std::endl;
    }
};

int main(){
    Vector v(6,7,-98);
    Vector v2 =++v;
    v.display();
    v2.display();
}