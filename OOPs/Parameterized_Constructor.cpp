#include <iostream>
using namespace std;

class ParameterizedConstructor{
    public:
        int a;
        int b;
    ParameterizedConstructor(int m, int n){
        a = m;
        b = n;
    }
    void print(){
        cout << "a = " << a << " b = " << b << endl;
    }
};


int main()
{
    ParameterizedConstructor c(12,8);
    c.print();

    return 0;
}
