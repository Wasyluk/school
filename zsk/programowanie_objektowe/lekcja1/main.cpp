#include <iostream>

using namespace std;

class Worker
{
public:
    Worker(string na="Jan", string sn="Kowalski", bool gen=1, string nat="Polska", float h=180, unsigned short int by=2000);
    void showSurname();
    void showName();
    void showPersonality(); //prototyp metody
private:
    //deklaracja zmiennych czlonkowskich/skladowych (cech, wlasciwosci)
    string name;
    string surname;
    string nationality;
    bool gender;
    float height;
    unsigned short int birthYear;
};

Worker::Worker(string na, string sn, bool gen, string nat, float h, unsigned short int by)
{
    name = na;
    surname = sn;
    gender = gen;
    nationality = nat;
    height = h;
    birthYear = by;
}

void Worker::showSurname()
{
    cout<<"Nazwisko pracownika: "<<surname<<'\n';
}

void Worker::showName()
{
    cout<<"Imie pracownika: "<<name<<'\n';
}

void Worker::showPersonality()
{
    cout<<"Dane pracownika:\n";
    cout<<"\tImie i nazwisko: "<<name<<' '<<surname<<'\n';
    cout<<"\tPlec: "<< (gender ? "mezczyzna\n" : "kobieta\n");
    cout<<"\tNarodowosc: "<<nationality<<'\n';
    cout<<"\tWzrost: "<<height<<"cm\n";
    cout<<"\tRok urodzenia: "<<birthYear<<"r\n";
}

int main()
{
    //setlocale(LC_CTYPE,"polish");
    Worker w1("Jan", "Nowak", 1, "Polska", 184.5, 1996);
    /*w1.showName();
    w1.showSurname();*/
    w1.showPersonality();

    return 0;
}
