#include<iostream>
using namespace std;

int swapping(int a[], int n)
{
    for(int i=0; i<n; i+=2)
    {
        if(i+1<n)
        {
            swap(a[i], a[i+1]);
        }
    }
    return 0;
}

int print(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main()
{
    int a[100];
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    swapping(a, n);
    print(a, n);
}