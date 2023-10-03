#include <bits/stdc++.h>
using namespace std;

class Car {
    
    public:
    
    string name;
    string color;
    int engineHP; //engine horse power
    
    Car() {
        
    }
    
    Car(string name, string color, int engineHP) {
        this->name = name;
        this->color = color;
        this->engineHP = engineHP; 
    }
    
    void drive() {
        cout<<name<<" Car is driving\n";
    }
    
};

class FlyingCar : public Car {
    
    public:
    FlyingCar() {
        
    }
    
    FlyingCar(string name,string color, int engineHP) {
        this->name = name;
        this->color = color;
        this->engineHP = engineHP;
    }
    
    void fly() {
        cout<<name<<" Car is flying\n";
    }
};

int main() {
    FlyingCar fc("SuperFly","Black",5000);
    fc.drive();
    fc.fly();
}