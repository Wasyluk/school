#include <iostream>

using namespace std;

struct Date
{
    unsigned short int d, m, y;
};

struct Student
{
    string name, surname;
    unsigned long int id;
    Date dateBirthday;
    unsigned short int gradeInformations[5];
};

int main()
{
    Student kowalski {"Janusz","Kowalski",1000,{13,05,1993},{3,3,1,4,5}};

    cout << "Dane pracownika: " << kowalski.name << ' ' << kowalski.surname << '\n'
         << "Identyfikator studenta: " << kowalski.id << '\n'
         <<"Data urodzenia: " << kowalski.dateBirthday.d << '.' << kowalski.dateBirthday.m << '.' << kowalski.dateBirthday.y << '\n'
         << "Oceny studenta z informatyki:\n";

    for(unsigned short int i=0;i<5;i++)
        {
            cout<<i+1<<". ocena: "<<kowalski.gradeInformations[i]<<'\n';
        }

    cout<<"\n\n";

    return 0;
}
