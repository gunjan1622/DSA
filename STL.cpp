#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> p; 
    //min heap
    priority_queue<int , vector<int>, greater<int>> m;

    m.push(1);
    m.push(3);
    m.push(2);
    m.push(0);
    cout<<"size: "<<m.size()<<endl;

    for(int i=0; i<=m.size(); i++)
    {
        cout<<m.top()<<" ";
        m.pop();
    }
    cout<<endl;

    p.push(1);
    p.push(3);
    p.push(2);
    p.push(0);

    for(int i=0; i<=p.size(); i++)
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;

}