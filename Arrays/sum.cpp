#include<iostream>
using namespace std;

int getsum( int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum = sum+ arr[i];
    }
    return sum;
}

int main()
{
    int a[100];
    int n;
    cout<<"enter size of the array: ";
    cin>>n;
    cout<<"Enter element: "<<endl;
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"sum of the array: "<<getsum(a, n)<<endl;
}