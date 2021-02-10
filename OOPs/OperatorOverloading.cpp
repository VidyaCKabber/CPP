
#include <iostream>
#include <string>

using namespace std;
class OperatorOverloading{
private:
    int value;
public:
    OperatorOverloading(){
        value = 10;
    }

    void operator ++(){
        ++value;
    }

    void display(){
        cout << "Value is " << value << endl;
    }
};

int main(){
    OperatorOverloading ptr;
    ++ptr;
    ptr.display();
    return 0;
}
