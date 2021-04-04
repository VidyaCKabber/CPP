#include <iostream>
using namespace std;

class DefaultConstructor{
    public:
    int a;
    int b;
    DefaultConstructor(){
        a = 19;
        b = 1;
    }
};

int main()
{
    DefaultConstructor c;
    
    cout<<"a = " << c.a << endl;
    cout<<"b = " << c.b << endl;

    return 0;
}
