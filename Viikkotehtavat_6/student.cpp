#include "student.h"

Student::Student(string n, int a) {

    Name=n;
    Age=a;
}

void Student::setAge(int newAge)
{
    Age = newAge;
}

int Student::getAge() const
{
    return Age;
}

string Student::getName() const
{
    return Name;
}

void Student::setName(const string &newName)
{
    Name = newName;
}

void Student::printStudentInfo()
{
    cout<<getName()<<endl;
    cout<<getAge()<<endl;
}
