// C++ program to read and print students information using two classes and simple inheritance

#include <iostream>
using namespace std;

class Student_Basic_Info{
protected:
    char name[20];
    char usn[10];
    int age;
    char gender[10];

public:
    void get_student_info(){
        cout << "Enter student name : ";
        cin >> name;
        cout << "Enter student usn : ";
        cin >> usn;
        cout << "Enter student age : ";
        cin >> age;
        cout << "Enter student gender : ";
        cin >> gender;
    }
};

class Student_Result_Info : public Student_Basic_Info{
private:
    int marks;
public:
    void read_student_marks(){
        cout << "Enter Student total 6 subject marks";
        cin >> marks;
    }

    void display_student_info(){
        cout << "Student's Name : "<< name << endl;
        cout << "Student's USN : "<< usn << endl;
        cout << "Student's Age : "<< age << endl;
        cout << "Student's Gender : "<< gender << endl;
        cout << "Student's Percentage : "<< (marks/6)*100 << endl;
    }
};

int main(){
    Student_Result_Info student;
    student.get_student_info();
    student.read_student_marks();
    student.display_student_info();
}
