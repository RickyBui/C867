#pragma once
// student.h
// C867 Performance Assessment
// Ricky Bui
// 04/11/2023
#include <iostream>
#include <string>
using namespace std;
#include "degree.h"

class Student {
    // Can be left as public
public:
    Student();
    Student(string studentID, string firstName, string lastName, string emails, int age, int daysInCourse[], DegreeProgram degreeProgram);
    ~Student();

    const static int daysInCourseArraySize = 3;

    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysInCourse[daysInCourseArraySize];
    DegreeProgram degreeProgram;
    int i = 0;

    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int* getDaysInCourse();
    DegreeProgram getDegreeProgram();

    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setDegreeProgram(DegreeProgram degree);
    void print();
     
};
