#ifndef UNTITLED_COURSE_H
#define UNTITLED_COURSE_H
#include <iostream>
using namespace std;
#include "person.h"

class Course {
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

    public:
    Course();
    Course(string courseCode, string courseName, int maxStudents, int currentStudents);
    void addStudent(const Student& s);
    void setCourseCode(string courseCode);
    void setCourseName(string courseName);
    void setMaxStudents(int maxStudents);
    void setCurrentStudents(int currentStudents);
    void displayCourseInfo();
};


#endif //UNTITLED_COURSE_H
