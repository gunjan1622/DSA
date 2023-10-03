#include<iostream>
using namespace std;

int bubblesort(int arr[], int n)
{
    for(int i =1; i<n; i++)
    {
        for(int j = 1; j<n-i; j++)
        {
            if(arr[j]> arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                
            }
            cout<<arr[j]<<" ";
        }
        
    }    
    return 0;
}

int main()
{
    int arr[30];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i= 0; i<n; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr, n);
}
