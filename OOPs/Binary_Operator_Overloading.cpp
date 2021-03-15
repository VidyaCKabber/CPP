//Binary operator overloading

#include <iostream>

using namespace std;

class Complex{

public:
    int real,img;

public:
    Complex(int r=0, int i=0){
        real = r;
        img = i;
    }

    Complex operator +(Complex const &obj){

        Complex cmp;
        cmp.real = real + obj.real;
        cmp.img = img + obj.img;

        return cmp;
    }


    void add_complex_numbers(){
        cout << real << "+" << img << "i" << endl;
    }
};

int main(){

    Complex c1(12,1),c2(4,9);

    Complex c3 = c1 + c2;

    c3.add_complex_numbers();

}
