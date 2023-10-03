#include<iostream>
using namespace std;

class Animal
{
    public:
    int a;

    Animal()
    {

    }

    void speak()
    {
        cout<<"Animals scream "<<endl;
    }
};

class Dog : public Animal
{
    public:
    int b;
    Dog()
    {

    }
    void speak()
    {
        cout<<"Dogs bark";
    }
};

int main()
{
    Dog d;
    d.speak();
    return 0;
}