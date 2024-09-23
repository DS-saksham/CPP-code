// Binary operator overloading
#include <iostream>
class Distance{
    private:
    int feet;
    float inches;
    public:
    Distance() : feet(0) ,inches(0.0){}
    Distance(int ft, float in) : feet(ft) , inches(in){
    }
    void getdist(){
        std::cout <<"\nEnter the feet";
        std::cin >> feet;
        std::cout << "\nEnter the inches";
        std::cin >> inches;
    }

    void showdist(){
        std::cout << feet << "/ " << inches <<"/";
    }

    void operator+=(Distance &d2);
};

void Distance::operator+=(Distance &d2){
feet+=d2.feet;
inches+= d2.inches;
if(inches>=12.0){
    inches-=12;
    feet++;
}
}

int main(){
    Distance d1;
    d1.getdist();
    Distance d2;
    d2.getdist();
    d1+= d2;
d1.showdist();
}