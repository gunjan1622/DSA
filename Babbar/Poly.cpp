#include<iostream>
using namespace std;

class Humans
{
    public:
    int height;

    Humans()
    {

    }

    void say()
    {
        cout<<"Humans"<<endl;
    }

    void say(int height)
    {
        cout<<"Height of human";
    }

};

int main()
{
    Humans H;
    H.say();
    H.say(7);
}