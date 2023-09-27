#pragma once
// roster.h
// C867 Performance Assessment
// Ricky Bui
// 04/11/2023
#include "student.h"
using namespace std;
#include <iostream>
#include <string>


class Roster

{
public:
    const static int numStudents = 5; //Max data size for table
    Student* classRosterArray[numStudents]; //Setting array to point back to students
    void add(string studentID, string firstName, string lastName, string email, int age, int avgDay1, int avgDay2, int avgDay3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    void parseData( string row);
    ~Roster();
private:
    int i = 0;
    int lastIndex = -1;
};  
