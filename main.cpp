// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
// C867 Performance Assessment
// Ricky Bui 
// 04/11/2023


#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

int main()
// Student Data
{
    const int numStudents = 5;
    const string studentData[] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Ricky,Bui      ,BuiRicky1996@gmail.com,26,30,31,32,SOFTWARE",
    };
    // Student Data

    // Course Title
    cout << "C867-Scripting & Programming Applications" << endl;
    cout << "Language C++" << endl;
    cout << "Student ID: 010738347" << endl;
    cout << "Name: Ricky Bui" << endl;
    cout << endl;
    // Course Title

    Roster classRoster;

    // Add student to class roster
    for (int i = 0; i < numStudents; i++) {
        classRoster.parseData(studentData[i]);
    }

    // F

    // Print student data from class roster
    classRoster.printAll();
    cout << endl << endl;

    // Print invalid emails
    cout << "Displaying Invalid Email Addresses:" << endl << endl;
    classRoster.printInvalidEmails();
    cout << endl;

    // Print average number in class
    cout << "Average Days In Course:" << endl << endl;
    for (int i = 0; i < numStudents; i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
    }
    cout << endl;

    // Print student by degree SOFTWARE
    cout << "Students in Software Degree Program:" << endl << endl;
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    cout << endl;

    // Remove A3
    classRoster.remove("A3");
    cout << endl;

    // Remove A3 again, not found because it is removed already
    classRoster.remove("A3");
    cout << endl;



    return 0;
}
