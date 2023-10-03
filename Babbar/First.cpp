#include<iostream>
using namespace std;

int main()
{
    //sum of n numbers
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // int sum = 0;
    // for(int i=1; i<=n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout<<sum<<endl;

    //fibonacci
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int f = 1;
    for(int i=1; i<=n; i++)
    {
        f = f * i;
    }
    cout<<f<<endl;
}