#include <iostream>

using namespace std;

struct Date
{
    unsigned short int d, m, y;
};

class Worker
{
public:
    unsigned long int id {};
    string name {}, surname{};
    Date dateBirthday {};

    void showAllData();
    void setData(unsigned long int x = 0, string n = "Janusz", string sn = "Kowalski", Date db = {1,1,2000});
};

void Worker::showAllData()
{
    cout<<"Dane pracownika: "<<name<<' '<<surname
    <<"\nIdentyfikator: "<<id
    <<"\nData urodzenia: "<<dateBirthday.d<<' '<<dateBirthday.m<<' '<<dateBirthday.y;
}

void Worker::setData(long unsigned int x, string n, string sn, Date db)
{
    id=x;
    name=n;
    surname=sn;
    dateBirthday=db;
}


int main()
{
    setlocale(LC_ALL,"polish");
    Worker kowalski;
    kowalski.setData();
    kowalski.showAllData();

    return 0;
}
