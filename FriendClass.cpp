#include <iostream>
using namespace std;

class FriendClassExample{
    private:
        int x = 10;
        char a = 'V';
        
    public:
        friend class ABC; 
};

class ABC{
    public:
    void show(FriendClassExample b){
        cout << b.x << endl;
        cout << b.a << endl;
    }
};


int main()
{
    FriendClassExample obj;
    ABC obj1;
    obj1.show(obj);

    return 0;
}
