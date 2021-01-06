#include<iostream>
#include<unordered_set>
#include<iterator>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(25);
    for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    if(s.find(15)==s.end())
        cout<<"not found"<<endl;
    else
        cout<<"found"<<endl;
    cout<<s.size()<<endl;
    s.erase(5);
    cout<<s.size()<<endl;
    for( unordered_set<int>::iterator it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;

}