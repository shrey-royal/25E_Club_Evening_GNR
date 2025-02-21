#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void showPersonDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int studentID;

    void setStudentID(int id) {
        studentID = id;
    }

    void showStudentDetails() {
        cout << "Student ID: " << studentID << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void setSubject(string sub) {
        subject = sub;
    }

    void showTeacherDetails() {
        cout << "Teaches: " << subject << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void showTADetails() {
        cout << "Teaching Assistant Details: " << endl;
        cout << "Name: " << Teacher::name << ", Age: " << Teacher::age << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    TeachingAssistant ta;

    ta.Teacher::setPersonDetails("Krish", 19);
    ta.setStudentID(101);
    ta.setSubject("Computer Science");

    ta.showTADetails();

    return 0;
}