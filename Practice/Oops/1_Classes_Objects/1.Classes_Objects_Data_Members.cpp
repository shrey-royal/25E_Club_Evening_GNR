#include <iostream>
using namespace std;

// Access Specifier --
//     Private      -- Within the class    -- default
//     Public       -- Throughout the file
//     Protected    -- within another class (inheritance)

class Student
{
    // data members -- properties  -- private (default)
    // protected: -- NOT ACCESSIBLE IN MAIN FUNCTION
public:
    string name;
    int rno, marks, age;
    char grades;
};

int main()
{
    // int age;
    Student s;
    s.name = "Harsh";
    s.rno = 121;
    s.marks = 98;
    s.age = 20;
    s.grades = 'A';

    cout << "Name\tRno\tMarks\tAge\tGrades\n";
    cout << s.name << "\t" << s.rno << "\t  " << s.marks << "\t"  << s.age << "\t" << s.grades;
    return 0;
}