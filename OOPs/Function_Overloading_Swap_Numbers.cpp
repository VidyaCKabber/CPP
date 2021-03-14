//Write a C++ program to define three overloaded functions to swap two integers, two doubles, two floats.
#include <iostream>

using namespace std;

class Swap{

public:
    void swap_two_nums(int a,int b){
        int c;
        cout << "Before Swapping : " << "a = "<< a << " , b = "<< b << endl;
        c = a;
        a = b;
        b = c;

        cout << "After Swapping : " << "a = "<< a << " , b = "<< b << endl;
    }

    void swap_two_nums(double a,double b){
        double c;
        cout << "Before Swapping : " << "a = "<< a << " , b = "<< b << endl;
        c = a;
        a = b;
        b = c;

        cout << "After Swapping : " << "a = "<< a << " , b = "<< b << endl;
    }

    void swap_two_nums(float a,float b){
        float c;
        cout << "Before Swapping : " << "a = "<< a << " , b = "<< b << endl;
        c = a;
        a = b;
        b = c;

        cout << "After Swapping : " << "a = "<< a << " , b = "<< b << endl;
    }
};

int main(){
    Swap sw;

    sw.swap_two_nums(34,4);
    sw.swap_two_nums(34.456,9.087);
    sw.swap_two_nums(19.4,39.4);
}

