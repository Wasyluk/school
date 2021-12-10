#include <iostream>

using namespace std;

class Animal
{
public:
    string name;
    string breed;
    float weight;
    float height;

    void publicFuncAnimal()
        {cout<<"funkcja publiczna klasy animal\n";}

    void setVaccination(bool vaccination)
        {vaccinated = vaccination;}

    bool getVaccination()
        {return vaccinated;}

    void funcAnimal()
        {cout<<"funkcja Animal";}
private:
    bool vaccinated;
};

class Dog : public Animal
{
public:
    void fetch()
        {cout<<"aport!";}

    void funcAnimal()
        {cout<<"funkcja Animal w klasie Dog";}
};

int main()
{
    Animal zwierze;
    zwierze.publicFuncAnimal();
    zwierze.setVaccination(1);

    return 0;
}
