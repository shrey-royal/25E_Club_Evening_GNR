using namespace std;

class Course {
public:
    string id;
    string name;
    static int totalNoOfCourses;

    Course(string id, string name) {
        this->id = id;
        this->name = name;
        totalNoOfCourses++;
    }
};

int Course::totalNoOfCourses = 0;   //:: -> scope resolution operator
// int Course::totalNoOfCourses = 0;