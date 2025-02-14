#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>

using namespace std;

class Student
{
public:
    Student(string, int);


    void setAge(int newAge);

    int getAge() const;

    string getName() const;
    void setName(const string &newName);

    void printStudentInfo();


private:
    string Name;
    int Age;
};

#endif // STUDENT_H
