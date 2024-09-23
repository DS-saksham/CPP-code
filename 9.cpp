// Example of binary operator + using friend function
#include <iostream>
class complex{
    private:int real, img;
    public:
    complex(int real=0, int img=0){
        this->real =real;
        this->img= img;
    }
    void showdata(){
        std::cout << real << "+" << img << "i " << std::endl;

    }
    friend complex operator+(complex &a , complex &b);
};

complex operator+(complex &a, complex &b){
    return complex((a.real+b.real),(a.img+b.img));
}

int main(){
    complex c1,c2,c3;
    c1= complex(5,10);
    c2 = complex(15.20);
    c3 =c1+c2;
    c3.showdata();
}