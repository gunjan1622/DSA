#include<iostream>
using namespace std;

int main()
{
    int a, b, ch;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    // cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n0. Exit\n";
    // cout<<"Enter your choice: ";
    // cin>>ch;

    while(ch!=6)
    {
        cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n0. Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Addition: "<<a+b<<endl;
                break;

            case 2:
                cout<<"Subtraction: "<<a-b<<endl;
                break;

            case 3:
                cout<<"Multiplication: "<<a*b<<endl;
                break;
            
            case 4: 
                cout<<"Division: "<<a/b<<endl;
                break;

            case 5:
                cout<<"Modulus: "<<a%b<<endl;
                break;
            
            case 6:
                cout<<"Exiting...";
                break;
        }
    }

}
