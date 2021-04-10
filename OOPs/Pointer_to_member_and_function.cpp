#include <iostream>

using namespace std;

class PointerExample {
    public:
    int x;
    
    public:
    void test(int a ){
        cout << "x = "<< x <<endl;
        cout << "a = "<<  a <<endl;
    }
};

int main()
{
    // Declare pointer to data member
    int PointerExample :: *ptr = &PointerExample :: x;
    
    // Declare pointer to member funtion
    void (PointerExample :: *fpter) (int) = &PointerExample :: test;
    
    PointerExample obj;
    
    obj.*ptr = 19;
    
    (obj.*fpter) (100);

    return 0;
}
