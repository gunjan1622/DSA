#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start = 0, end = n-1;
    int mid = start + (end-start)/2 ;

    while(start<=end)
    {
        if(arr[mid]== key)
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end-start)/2 ;
    }
    return -1;
}

int main()
{
    int a[100];
    int n, key;
    cout<<"enter size of the array: ";
    cin>>n;
    cout<<"Enter element: "<<endl;
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter Key: ";
    cin>>key; 

    cout<<"The key is at: "<<binarysearch(a, n, key)<<endl;
}