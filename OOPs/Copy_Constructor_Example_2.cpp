#include <iostream>
using namespace std;

class CopyConstructor{
    public:
        int a;
        int b;
        int sum;
    CopyConstructor(int m, int n){
        a = m;
        b = n;
    }
    CopyConstructor(CopyConstructor &obj){
        sum = obj.a + obj.b;
    }
};
int main()
{
    CopyConstructor c(12,8);
    CopyConstructor c1(c);
    cout << c.a << "+" << c.b << " = "<< c1.sum << endl;

    return 0;
}
