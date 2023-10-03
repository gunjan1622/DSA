#include<iostream>
using namespace std;
#include <array>

char alpha(string stri)
{
    char res ='a';
    int arr[26];
    for(int i =0; i<stri.length(); i++)
    {
        arr[stri[i]-'a']=1;
    }
    
    for(int i =0; i< 26; i++)
    {
        if(arr[i]==0)
        {
            res = 'a'+i;
            cout<<res;
            break;
        }
    }
    return res;
}



int main()
{
    string str= "barcelona";
    char res= alpha(str);
    cout<<res;
    return 0;
}