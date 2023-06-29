// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, num=1;
//     cout<<"Enter number of rows";
//     cin>>n;

//     for(int i=0; i<=n; i++)
//     {
//         for(int j=0; j<=i; j++)
//         {
//             cout<<num<<" ";
//            num++;
//         }
//         cout<<endl;
        
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    char num='A';
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<num<<" ";
           num++;
        }
        cout<<endl;
        
    }
}