//Unary operator

#include <iostream>>

using namespace std;

class Unary_Example{
public:
    int num;

public:
    Unary_Example(){
        num = 9;
    }
    void operator ++(){
        ++num;
    }

};

int main(){
    Unary_Example x;
    ++x;
    cout<<"x ="<<x.num<<"\n";

}
