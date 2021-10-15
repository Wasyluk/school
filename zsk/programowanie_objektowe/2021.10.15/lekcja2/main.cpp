#include <iostream>

using namespace std;


struct Date
{
    int dd,mm,yyyy;
};

class Worker
{
public:
    unsigned int id;
    string name, surname;
    Date dateBirthday;

    void getData();

    Worker(int id = 1, string name = "Janusz", string surname = "Nowak", Date dateBirthday = {01,01,2000})
        {
            Worker::id = id;
            Worker::name = name;
            Worker::surname = surname;
            Worker::dateBirthday = dateBirthday;
        }

};

void Worker::getData()
{
    cout<<"ID: "<<id
        <<"\nName and Surname: "<<name<<' '<<surname
        <<"\nBirthday: "<<dateBirthday.dd<<'.'<<dateBirthday.mm<<'.'<<dateBirthday.yyyy<<'\n';
}

int main()
{

    Worker nowak;
    nowak.getData();

    Worker *wsk;
    wsk = &nowak;


    return 0;
}
