#include <iostream>
class Vector{
    private:
    int x, y,z;
    public:
    Vector(int x =0, int y=0, int z=0){
        this->x =x;
        this->y=y;
        this->z =z;
    }

    Vector(const Vector &v){
        this->x= v.x;
        this->y =v.y;
        this->z =v.z;
    }

    ~Vector(){}
    Vector add(const Vector &v){
        return Vector(x+v.x,y+v.y, z+v.z);
    }

    void display(){
        std::cout << x << "|" << y << "|" << z << std::endl;
    }
};


int main(){
    Vector v1(1,2,3);
    Vector v2(3,5,7);
    Vector v3  = v1.add(v2);
    v3.display();
}
