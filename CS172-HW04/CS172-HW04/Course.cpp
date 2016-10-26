#include "Course.hpp"
#include <iostream>
#include <string>
using namespace std;

Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}

Course::~Course()
{
    delete [] students;
}

string Course::getCourseName() const
{
    return courseName;
}

void Course::addStudent(const string& name)
{
    //if the number of students reaches capacity, the capacity is increased
    if(numberOfStudents==capacity)
        capacity++;
    //otherwise, a student is added
    else
    {
        students[numberOfStudents] = name;
        numberOfStudents++;
    }
}

void Course::dropStudent(const string& name)
{
    int drop=0;
    for(int i=0; i<numberOfStudents; i++)
    {
       if(students[i]==name)
           drop = i;
    }
    for(int j=drop; j<numberOfStudents; j++)
    {
        students[j]=students[j+1];
    }
    numberOfStudents--;
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

void Course::clear()
{
    for(int k=0; k<=numberOfStudents; k++)
    {
        students[k]=students[k-1];
        numberOfStudents--;
    }
}
