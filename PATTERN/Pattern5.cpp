// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;

//     for(int i=0; i<=n; i++)
//     {
//         int num = i;
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
// int main()
// {
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<i+j<<" ";
//         }
//         cout<<endl;  
//     }
// }

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            char ch= 'A'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;  
    }
}