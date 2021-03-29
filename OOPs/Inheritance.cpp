#include<iostream>
using namespace std;

class Parent{
public:
    void print(){
        cout << "Hi Buddy" << endl;
    }    
};

class Child : public Parent{
public:
    void test(){
        cout << "Parent" << endl;
    }
    /*void print(){
        cout << "Parent" << endl;
    }*/
};

int main(){
    Child cld;
    cld.print();
    cld.test();
}
