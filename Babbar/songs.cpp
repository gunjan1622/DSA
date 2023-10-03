#include<iostream>
using namespace std;

int song(int arr[], int n, int at)
{
    int count =0;
    for(int i=0; i<n; i++)
    {
        int j = i+1;
        int k = n-1;
        while(j<k)
        {
            int sum = arr[i]+ arr[j]+ arr[k];
            if(sum == at)
            {
                count++;
                j++;
                k--;
            }
            else if (sum< at)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return count;
}




int main()
{
    int songs[40]= {2, 5, 7, 14, 17, 19, 21, 29};
    int n, airtime;
    // cout<<"Enter the number of elements: ";
    // cin>>n;
    // cout<<"Enter the airtime ";
    // cin>>airtime;
    // cout<<"Enter elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>songs[i];
    // }
    int res= song(songs, 8, 40);
    cout<<res;

}