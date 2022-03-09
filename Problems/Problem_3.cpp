//C++ program to create class called complex and implement the overloading functions add that return a complex number
#include <iostream>

using namespace std;

class Complex{

private:
    int real;
    int imag;

public:
    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }

   Complex operator + (Complex const &obj){

        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;

        return res;
   }

   void print(){
        cout << real << "+" << imag << "i" << endl;
   }
};


int main(){
    Complex c1(10,2),c2(21,4);
    Complex c3 = c1+c2;

    c3.print();
}

