
// C++ program to read and print employee information using multiple inheritance.
#include <iostream>
using namespace std;

class Emp_Basic_Info{
protected:
    char name[10];
    int emp_id;
    int emp_age;

public:
    void get_basic_info(){
        cout << "Enter Employee Name : " ;
        cin >> name;
        cout << "\n Enter Employee Id : " ;
        cin >> emp_id;
        cout << "\n Enter Employee Age : " ;
        cin >> emp_age;
    }
};

class Emp_Dept_Info{
protected:
    char emp_role[20];
    char assigned_work[50];
    int mail_stone;

public:
     void get_dept_info(){
        cout << "Enter Employee Role : " ;
        cin.ignore(1);
        cin.getline(emp_role,20);
        cout << "\n Enter Employee's Assigned Work : " ;
        fflush(stdin);
        cin.getline(assigned_work,20);
        cout << "\n Enter Employee's Work Mail Stone : " ;
        cin >> mail_stone;
    }
};

class Employee : private Emp_Basic_Info , private Emp_Dept_Info{
public:
    void get_employee_info(){
        cout << "Enter employee's basic info: " << endl;
        get_basic_info();
        cout << "Enter employee's department info: " << endl;
        get_dept_info();
    }

    void diplay_employee_info(){
        cout << "Enter Employee Name : " << name << endl;
        cout << "Enter Employee ID : " << emp_id << endl;
        cout << "Enter Employee Age : " << emp_age << endl;
        cout << "Enter Employee Role : " << emp_role << endl;
        cout << "Enter Employee's Assigned Work : " << assigned_work << endl;
        cout << "Enter Employee's Mail Stone : " << mail_stone << endl;

    }
};

int main(){

    Employee emp;
    emp.get_employee_info();
    emp.diplay_employee_info();
}
