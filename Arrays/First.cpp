#include<iostream>
using namespace std;

void printArray(int a[], int size)
{
    cout<<"printing the array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
}

int main()
{
    int  num[15];
    cout<<"value at 13 index: "<<num[13]<<endl;

    int sec[3] = {1, 2, 3};
    cout<<"value at 2 index: "<<sec[2]<<endl;

    int third[5] = {1, 2, 3};
    printArray(third, 5);

    int fifth[6] = {1};
    printArray(fifth, 6);

    cout<<endl<<"Everything is fine"<<endl;
    return 0;
}