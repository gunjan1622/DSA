#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime";
        }
        else
        {
            cout<<"Prime";
        }
    }
    return 0;
}