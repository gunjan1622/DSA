#include<iostream>
using namespace std;

int main()
{
    string s;
    char ch;
    cout<<"String: ";
    getline(cin, s);

    cout<<"Charachter: ";
    cin>>ch;

    int o= 0;
    for(int i =0; i<s.length(); i++)
    {
        if(s[i]==ch)
            o++;
    }

    cout<<o;
}
