#include <iostream>

using namespace std;

class Dog
{
public:
    string name;
    string breed;
    string color;
    string eyeColor;
    float height;
    float length;
    float weight;

    Dog(string name = "Fafik", string breed = "---", string color = "brown", string eyeColor = "blue", float height = 20, float length = 50, float weight = 30);

    void sit()
        {cout<<"Pies siedzi\n";}
    void layDown()
        {cout<<"Pies lezy\n";}
    void shake()
        {cout<<"Pies macha ogonem\n";}
    void come()
        {cout<<"Pies przyszedl\n";}
};

Dog::Dog(string name, string breed, string color, string eyeColor, float height, float length, float weight)
{
    Dog::name=name;
    Dog::breed=breed;
    Dog::color=color;
    Dog::eyeColor=height;
    Dog::height=height;
    Dog::length=length;
    Dog::weight=weight;
}

int main()
{
    Dog d1;
    return 0;
}
