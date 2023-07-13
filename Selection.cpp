#include<iostream>
using namespace std;

int selection(int arr[], int n)
{
    for(int i= 0; i < n; i++)
    {
        int min= i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        } 
        swap(arr[min], arr[i]);
        cout<<arr[i]<<" ";
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
    selection(arr, n);
}
