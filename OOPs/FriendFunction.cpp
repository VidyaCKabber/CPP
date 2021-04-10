#include <iostream>
using namespace std;

class FriendFunctionExample{
    private:
        int x = 10;
        char a = 'V';
        
    public:
        friend void show(FriendFunctionExample b); 
};

void show(FriendFunctionExample b){
    cout << "x = " << b.x << " a = "<< b.a << endl;
}

int main()
{
    FriendFunctionExample obj;
    
    show(obj);

    return 0;
}
