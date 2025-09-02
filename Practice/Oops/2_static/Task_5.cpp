/*
!Task :  Create a class Student with a static data member count. 
?        Use a static member function to display the total number of students created.

!Sample Input:
Student s1, s2, s3; 
Student::displayCount();
*/

#include <iostream>
using namespace std;

class Student
{
    static int count;

public:
    void createStudent()
    {
        
    }

};

int Student :: count = 0;

int main()
{
    
    return 0;
}