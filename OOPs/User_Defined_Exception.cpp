#include <iostream>

using namespace std;

struct MyException : public exception{

    const char* what() const throw(){
        return "C++ Exception";
    }

};
int main(){
    try{
        throw MyException();
    } catch(MyException &e){
        cout << "MyException Caught" << endl;
        cout << e.what() << endl;
    } catch(exception &e){
        cout << "Default Exception";
    }
}
