#include <iostream>

using namespace std;

struct Date
{
    unsigned short int day;
    unsigned short int month;
    unsigned short int year;
};

struct Time
{
    unsigned short int hour;
    unsigned short int minute;
    unsigned short int second;
};

class DateTime
{
public:
    static Date date;
    static Time time;

    static void showDate();
    static void showTime();
    static void showAll();
};

Time DateTime::time = {15,55,42};
Date DateTime::date = {22,02,2005};

void DateTime::showDate()
{
    cout<<"date: "<<date.day<<'.'<<date.month<<'.'<<date.year<<'\n';
}

void DateTime::showTime()
{
    cout<<"time: "<<time.hour<<'.'<<time.minute<<'.'<<time.second<<'\n';
}

void DateTime::showAll()
{
    cout<<"date: "<<date.day<<'.'<<date.month<<'.'<<date.year<<'\n';
    cout<<"time: "<<time.hour<<':'<<time.minute<<':'<<time.second<<'\n';
}

int main()
{
    DateTime::showAll();
    return 0;
}
