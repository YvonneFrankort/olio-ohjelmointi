#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main ()
{
  int selection =0;
  vector<Student*>studentList;

  //alussa luodaan opiskelija
  Student a("Ada",30);
  Student b("Berta",26);
  Student c("Chloe",28);
  Student d("Dennis",27);

  studentList.pushback(a);
  studentList.pushback(b);
  studentList.pushback(c);
  studentList.pushback(d);

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
                cout<<num<<"";
          }
          break;

        case 2:
		  // Järjestä StudentList vektorin Student oliot nimen mukaan
		  // algoritmikirjaston sort funktion avulla
		  // ja tulosta printStudentInfo() funktion avulla järjestetyt
		  // opiskelijat
          break;

        case 3:
		  // Järjestä StudentList vektorin Student oliot iän mukaan
		  // algoritmikirjaston sort funktion avulla
		  // ja tulosta printStudentInfo() funktion avulla järjestetyt
		  // opiskelijat
          break;
        case 4:
          // Kysy käyttäjältä opiskelijan nimi
		  // Etsi studentListan opiskelijoista algoritmikirjaston
		  // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
		  // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
          break;
          }
        default:
          cout<< "Wrong selection, stopping..."<<endl;
          break;
      }
    }while(selection < 5);

  return 0;
}
