
#include <iostream>

using namespace std;

class Car
{
    public:
    unsigned long int id;
    string brand;
    string model;

    /*Car(unsigned long int id=0, string brand="Fiat", string model="Multipla");*/

    Car(unsigned long int id, string brand, string model);
    Car();
    void getData();
};
Car::Car(unsigned long int id, string brand, string model)
{
    Car::id = id;
    Car::brand = brand;
    Car::model = model;
}

Car::Car()
{
    Car::id = id;
    Car::brand = brand;
    Car::model = model;
}


void Car::getData()
{
    cout<<"ID: "<<id
        <<"\nMarka: "<<brand
        <<"\nModel: "<<model<<'\n';
}

int main()
{
    Car bmw;
    bmw.getData();

    Car samochod (1, "Ferrari", "F460");
    samochod.getData();
    return 10;
}
