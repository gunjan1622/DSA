#include<iostream>
using namespace std;

int singleNumber(int arr[], int nums) 
{
        int ans=0;
        for(int i=0; i<nums; i++)
        {
            ans = ans^arr[i];
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
    singleNumber(a, n);
    print(a, n);
}