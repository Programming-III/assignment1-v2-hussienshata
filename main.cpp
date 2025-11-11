#include <iostream>
using namespace std;
#include "person.h"
#include "course.h"

Person::Person() {
    this->name = "No name";
    this->id = 0;
}

Person::Person(string name, int id) {
    this->name = name;
    this->id = id;
}

string Person::getName() {
    return name;
}

int Person::getID() {
    return id;
}

void Person::setID(int id) {
    this->id = id;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::display() {
    cout << "Name : " << name << " ID: " << id << endl;
}

Student::Student() {
    this->major = "No major";
    this->yearLevel = 0;
}
Student::Student(int yearLevel, string major) {
    this->yearLevel = yearLevel;
    this->major = major;
}

void Student::setMajor(string major) {
    this->major = major;
}

void Student::setYearLevel(int yearLevel) {
    this->yearLevel = yearLevel;
}

string Student::getMajor() {
    return major;
}

int Student::getYearLevel() {
    return yearLevel;
}

void Student::display() {
    cout << "Name: " << Person::getName() << " ID " << Person::getID() << " Year level " << yearLevel << " Major " << major;
}

Instructor::Instructor() {
    this->department = "No department";
    this->experienceYears = 0;
}

Instructor::Instructor(string department, int experienceYears) {
    this->department = department;
    this->experienceYears = experienceYears;
}

void Instructor::setDepartment(string department) {
    this->department = department;
}

void Instructor::setexperienceYears(int experienceYears) {
    this->experienceYears = experienceYears;
}

string Instructor::getDepartment() {
    return department;
}

int Instructor::getexperienceYears() {
    return experienceYears;
}

void Instructor::display() {
    cout << "Name: " << Person::getName() << " ID " << Person::getID() << " Experience Years " << experienceYears << " Deperatment " << department;
}

Course::Course() {
    this->courseCode = "No code";
    this->courseName = "No name";
    this->maxStudents = 0;
    this->currentStudents = 0;
}

Course::Course(string courseCode, string courseName, int maxStudents, int currentStudents) {
    this->courseCode = courseCode;
    this->courseName = courseName;
    this->maxStudents = maxStudents;
    this->currentStudents = currentStudents;
}

void Course::setMaxStudents(int maxStudents) {
    this->maxStudents = maxStudents;
}

void Course::setCurrentStudents(int currentStudents) {
    this->currentStudents = currentStudents;
}

void Course::setCourseName(string courseName) {
    this->courseName = courseName;
}

void Course::displayCourseInfo() {
    cout << "Course: " << courseName << " Code: " << courseCode << "Max students: " << maxStudents << " Current Students " << currentStudents << endl;
}

void Course::setCourseCode(string courseCode) {
    this->courseCode = courseCode;
}

int main() {
Course c = {"CS101", "Introduction to Programming", 3, 0};
c.displayCourseInfo();
    Person p = {"Omar Nabil", 2202};
    cout << "Currently enrolled: ";
    p.display();
    cout << endl;
}
