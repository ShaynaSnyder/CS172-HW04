#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
#include <string>
using namespace std;

//creates class Course
class Course
{
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
public:
    Course(const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    void clear();
    string* getStudents() const;
    int getNumberOfStudents() const;
};

#endif /* Course_hpp */
