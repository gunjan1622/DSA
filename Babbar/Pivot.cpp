#include<iostream>
using namespace std;

int Pivot(int arr[], int n)
{
    int start = 0, end = n-1;
    int mid = start + (end-start)/2 ;

    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start = start + mid;
        }
        else
        {
            end = mid;
        }

        mid = start + (end-start)/2 ;
    }
    return start;
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
    cout<<"The pivot element is : "<<Pivot(a, n)<<endl;
}