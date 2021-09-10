#include <iostream>

using namespace std;

class Worker
{
public:
    Worker(string n, string sn);
    void showSurname();
    void showName();
    void showAllData(); //prototyp metody
private:
    //deklaracja zmiennych czlonkowskich/skladowych (cech, wlasciwosci)
    string name;
    string surname;
    short int age;
};

Worker::Worker(string n, string sn)
{
    name = n;
    surname = sn;
}

void Worker::showSurname()
{
    cout<<"Nazwisko pracownika: "<<surname<<'\n';
}

void Worker::showName()
{
    cout<<"Imiê pracownika: "<<name<<'\n';
}

void Worker::showAllData()
{
    cout<<"Nazwisko: "<<surname<<",   Imiê: "<<name<<'\n';
}

int main()
{
    setlocale(LC_CTYPE,"polish");
    Worker w1("Jan", "Nowak");
    w1.showSurname();
    w1.showSurname();
    w1.showAllData();

    return 0;
}
