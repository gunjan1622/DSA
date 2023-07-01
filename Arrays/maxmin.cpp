#include<iostream>
using namespace std;

int getmax(int a[], int n)
{
    int maxi;
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, a[i]);
    }
    return maxi;
}

int getmin(int a[], int n)
{
    int mini;
    for(int i=0; i<n; i++)
    {
        mini= min(mini, a[i]);
    }
    return mini;
}

int main()
{
    int arr[100];
    int n;
    cout<<"enter size of the array: ";
    cin>>n;
    cout<<"Enter element: "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum number in array: "<<getmax(arr, n)<<endl;
    cout<<"Minimum number in array: "<<getmin(arr, n)<<endl;
}