#include<iostream>
using namespace std;

int main()
{
    string str = "0A1B1C0";
    int res = str[0]-'0';
    for(int i=0; i<str.size(); i+=2)
    {
        int j=i+1;
        if(str[i]=='A')
        {
            res = res & (str[j]-'0');
        }
        else if(str[i]=='B')
        {
            res = res | (str[j]-'0');
        }
        else if(str[i]=='C')
        {
            res = res ^ (str[j]-'0');
        }
    }
    cout<<res;
}