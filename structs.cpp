#include <iostream>
#include <string>
using namespace std;


struct Student {
    int id;
    string name;

} student_1, student_2;


int main() {
    Student student_1;
    student_1.id = 9993;
    student_1.name = "Harry Calahan \n";
    //cout << student_1.id << endl;
    //cout << student_1.name << endl;

    Student student_2;
    student_2.id = 9994;
    student_2.name = "Larry Lalahan \n";
    //cout << student_2.id << endl;
    //cout << student_2.name << endl;

    Student student_3;
    student_3.id = 9995;
    student_3.name = "Garry Galahan \n";

    Student student[3];
    student[0] = student_1;
    student[1] = student_2;
    student[2] = student_3;

    cout << "Id: " << student[0].id << "\n" << "Name: "<< student[0].name << endl;
    cout << "Id: " << student[1].id << "\n" << "Name: "<< student[1].name << endl;
    cout << "Id: " << student[2].id << "\n" << "Name: "<< student[2].name << endl;

    for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++) {
        if (student[i].name == "Harry Calahan \n") {
            student[i].name = "Karry Kalahan \n";
        }
    }
    cout << student[0].name;

    return 0;
}