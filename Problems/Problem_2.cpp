
//Program to create a student class with usn, name and marks in 3 subjects and calculate average of two better marks for each student and print the student details

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Student{

public:
    char name[100];
    char usn[20];
    int marks[3];
    float avg;

public:
    void get_student_details(int num){
        cout << num << " student details" << endl;
        cout << "Student Name : ";
        cin >> name;
        cout << "Student USN : ";
        cin >> usn;
        cout << "Student Marks : ";

        for(int i=0; i<3; i++){
            cout << i+1 << "Subject marks : " << endl;
            cin >> marks[i];
        }

        cout << "\n------------" << num << " Student details are saved" <<  "------------\n"<< endl;
    }

    float calculate_average_of_two_better_marks(){

        int n = sizeof(marks) / sizeof(marks[0]);
        sort(marks, marks + n);
        avg = (marks[0]+marks[1]) / 2.0;

        return avg;
    }

    void display_employee_net_salary(){
        cout << "Student Name : " << name << endl;
        cout << "Student USN : " << usn << endl;
        cout << "Student's average of two better marks: " << avg << endl;
    }
};

int main(){
    int n,num;
    cout << "Number of students : ";
    cin >> n ;

    Student student[n];

    for(num =0; num < n; num++){
        student[num].get_student_details(num+1);
    }

    for(num =0; num < n; num++){
        student[num].calculate_average_of_two_better_marks();
    }

    for(num =0; num < n; num++){
        student[num].display_employee_net_salary();
    }
}
