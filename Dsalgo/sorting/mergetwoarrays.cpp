#include<iostream>
#include<vector>
using namespace std;


void mergeTwoArrays(vector<int> num1,vector<int> num2)
{
    int i=0,j=0;
    int size1=num1.size();
    int size2=num2.size();
    while(i<size1 &&j<size2)
    {
        if(num1[i]<num2[j])
            cout<<num1[i++]<<" ";
        else
            cout<<num2[j++]<<" ";
    }
    while(i<size1)
        cout<<num1[i++]<<" ";
    while(j<size2)
        cout<<num2[j++]<<" ";
}

int main()
{
    vector<int> num1 {10,15,20,40};
    vector<int> num2 {5,6,6,10,15};
    mergeTwoArrays(num1,num2);
}