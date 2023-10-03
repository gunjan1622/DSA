#include<bits/stdc++.h>
using namespace std;
//time complexity O(n^3)
int markrow(int i)
{
    int arr[][m], m, n;
    for(int j=0; j<m; j++)
    {
        if(arr[i][j]!=0)
        {
            arr[i][j]=-1;
        }
    }
}

int markcol(int j)
{
    int arr[][m], m, n;
    for(int i=0; i<n; i++)
    {
        if(arr[i][j]!=0)
        {
            arr[i][j]=-1;
        }
    }
}

int set_matrix(int n, int m, int arr[][m])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]== 0)
            {
                markrow(i);
                markcol(j);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]== -1)
            {
                arr[i][j]=0;
            }
        }
    }
    cout<<arr;
}

int main()
{
    int  test[3][3] = { {1, 0, 1}, {1, 1, 1}, {0, 1 ,1}};
    set_matrix(test, 3, 3);
}