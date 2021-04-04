#include <iostream>
using namespace std;

class Dynamic_Constructor{
    const char *p;
    public:
    Dynamic_Constructor(){
        p = new char[6];
        p = "Vidya";
    }
    void display(){
        cout << p << endl;
    }
};

int main()
{
    Dynamic_Constructor c = Dynamic_Constructor();
    c.display();

    return 0;
}
