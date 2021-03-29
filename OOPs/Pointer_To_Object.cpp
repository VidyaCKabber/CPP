// Pointer to object
#include <iostream>

using namespace std;

class Box {
public:
    int lenght;
    int breadth;
    int height;

public:
    Box(int i,int j, int k){
        lenght = i;
        breadth = j;
        height = k;
    }

    int volume(){
        return lenght * breadth * height;
    }
};

int main(){
    Box box1(1,2,3);
    Box box2(4,3,4);

    Box *ptr;
    ptr = &box1;
    cout << ptr->volume(); << endl;
}
