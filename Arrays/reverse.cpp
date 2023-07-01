#include<iostream>
using namespace std;

int reverse(int a[], int n)
{
    int start = 0;
    int end = n-1;

    while(start<end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int print(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
    reverse(a, n);
    print(a, n);
}