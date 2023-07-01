#include<iostream>
using namespace std;

bool search(int a[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]== key)
        {
            return 1;
        }
    }
    return 0;
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
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    bool found = search(arr, n, key);
    if(found)
    {
        cout<<"Element is present in the array"<<endl;
    }
    else
    {
        cout<<"Element is not present in the array"<<endl;
    }
}