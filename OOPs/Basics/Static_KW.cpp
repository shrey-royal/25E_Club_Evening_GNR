#include<iostream>
#include"Course.cpp"
using namespace std;

int main() {
    cout << "Before adding courses: " <<  Course::totalNoOfCourses << endl;

    Course c1("PHY-101", "Physics"), c2("COM-101", "Computer");
    // Course c3("SCI-101", "Science");

    cout << "After adding courses: " <<  Course::totalNoOfCourses << endl;


    return 0;
}