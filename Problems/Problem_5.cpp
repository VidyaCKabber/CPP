//C++ program to demonstrate example of hierarchical inheritance to get square and cube of a number.
#include <iostream>

using namespace std;

class Number{
private:
    int num;

public:
    void getNumber(void){
        cout << "Enter an integer number: ";
        cin >> num;
    }

    int returnNumber(void){
        return num;
    }
};
class Square : public Number{
public:
    int getSquare(void){
        int sqr;
        num = returnNumber();
        sqr = num * num;
        return sqr;
    }
};
class Cube:public Number{
public:
    int getCube(void){
        int num,cube;
        num = returnNumber();
        cube = num * num * num;
        return cube;
    }
};

int main(){
    Square objs;
    Cube objc;
    int sqr,cube;
    objs.getNumber();
    sqr = objs.getSquare();
    cout << "Sqare of " << objs.returnNumber() << "is : " << sqr << endl;
    cube = objc.getCube();
    cout << "Cube of " << objc.returnNumber() << "is : "<< cube << endl;
}

