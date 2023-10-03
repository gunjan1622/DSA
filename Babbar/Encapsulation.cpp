#include<iostream>
using namespace std;

// Default argument
class Student {  
    private:    
    string name;
    int roll_no;
    int marks;
    public:
    void setData(string name,int roll_no, int marks) {
        this->name = name;
        this->roll_no = roll_no;
        this-> marks = marks;
    }
        void GetData() {
        cout<<"My name is "<<name<<" and my roll number is "<<roll_no<<". I got "<<marks<<" marks out of 100\n";
    }
    
};

int main() {
    // s1 is an object of class Student
    Student s1;
    s1.setData("Guneet",2,95);
    s1.printData();
    return 0;
}