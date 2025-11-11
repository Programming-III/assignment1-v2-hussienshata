#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H
#include <iostream>
using namespace std;

class Person {
    private:
    string name;
    int id;

    public:
    Person();
    Person(string name, int id);
    void setName(string name);
    void setID(int id);
    string getName();
    int getID();
    void display();

};

class Student: Person {
    private:
    int yearLevel;
    string major;

    public:
    Student();
    Student(int yearLevel, string major);
    void setYearLevel(int yearLevel);
    void setMajor(string major);
    string getMajor();
    int getYearLevel();
    void display();

};

class Instructor: Person {
    private:
    string department;
    int experienceYears;

    public:
    Instructor();
    Instructor(string department, int experienceYears);
    void setexperienceYears(int experienceYears);
    void setDepartment(string department);
    string getDepartment();
    int getexperienceYears();
    void display();
};

#endif //UNTITLED_PERSON_H
