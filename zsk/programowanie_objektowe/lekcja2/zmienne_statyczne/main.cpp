#include <iostream>

using namespace std;

class School
{
public:
    //zmienne statyczne
    static string s_school;
    static string s_jobPosition;

    //zmienne instancyjne
    string name;
    string surname;

    void getData();
    void setNameSurname(string n, string sn);

    static string s_getSchool();
};

string School::s_school = "zsk";
string School::s_jobPosition = "student";

void School::getData()
{
    cout<<name<<'\n'<<surname<<'\n';
}

void School::setNameSurname(string n, string sn)
{
    name = n;
    surname = sn;
}

string School::s_getSchool()
{
    return s_school;
}

int main()
{
    cout<<School::s_school<<'\n'
        <<School::s_jobPosition<<'\n';

    cout<<School::s_getSchool()<<'\n';

    School sch;

    sch.setNameSurname("Jan", "Kowalski");
    sch.getData();
    return 0;
}
