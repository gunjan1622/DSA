#include<iostream>
using namespace std;

int sort01(int a[], int n)
{
    int i=0, j= n-1;
    while(i<j)
    {
        while(a[i]==0 && i<j)
        {
            i++;
        }
        while(a[j]==1 && i<j)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
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
    sort01(a, n);
    print(a, n);
}