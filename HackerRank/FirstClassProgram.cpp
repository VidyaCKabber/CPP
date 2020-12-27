/*
Input Format

Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format

The code provided by HackerRank will use your class members to set and then get the elements of the Student class.
*/

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    private:
        int age, standard;
        string first_name, last_name;
    
    public:
        void set_age(int a){
            age = a;
        }
        void set_standard(int s){
            standard = s;
        }
        void set_first_name(string fn){
            first_name = fn;
        }
        void set_last_name(string ln){
            last_name = ln;
        }
        
        //display values
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age;
    cin >> first_name;
    cin >> last_name;
    cin >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n\n";

cout << st.get_age() << "," << st.get_first_name() << "," << st.get_last_name() << "," << st.get_standard() << endl;
    return 0;
}
