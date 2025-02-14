#include "student.h"
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    //alussa luodaan opiskelija
    Student a("Ada",30);
    Student b("Berta",26);
    Student c("Chloe",28);
    Student d("Dennis",27);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            //student *s=new student
            // studentlist->lisaa(student)
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout<<"Student name: ";
            for (Student s: studentList){
                cout<<s.getName()<<" ";
            }
            cout<<endl;
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout<<"Students listed by name: "<<endl;
            sort(studentList.begin(), studentList.end(),[](const Student& eka, const Student& toka)
                {
                return eka.getName() < toka.getName();
                }
            );

            for (Student s: studentList){
            s.printStudentInfo();
            }
            cout<<endl;
            break;


        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout<<"Students listed by age: "<<endl;
            sort(studentList.begin(), studentList.end(),[](const Student& eka, const Student& toka)
                 {
                     return eka.getAge() < toka.getAge();
                 }
                 );

            for (Student s: studentList){
                s.printStudentInfo();
            }
            cout<<endl;
            break;


        case 4:{
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string names;
            cout<<"Student name? "<<endl;
            cin>>names;
            auto it = find_if(studentList.begin(), studentList.end(), [names](const Student& student){
                return student.getName()== names;
            });
            if (it!=studentList.end()){
                cout<<"Student found"<<endl;
                it->printStudentInfo();
            }else{
                cout<<"Student not found"<<endl;
            }
            break;
        }

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
