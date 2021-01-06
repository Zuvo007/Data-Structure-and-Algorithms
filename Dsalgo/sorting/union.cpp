#include<iostream>
#include<vector>
using namespace std;



void getUnion(vector<int> num1,vector<int> num2)
{
    int size1=num1.size();
    int size2=num2.size();
    int i=0;
    int j=0;
    while(i<size1 && j<size2)
    {
        if(i>0 && num1[i-1]==num1[i]){
            i++;
            continue;
        }
        if(j>0 && num2[j-1]==num2[j]){
            j++;
            continue;
        }

        if(num1[i]<num2[j]){
            cout<<num1[i]<<" ";i++;}
        else if(num2[j]<num1[i]){
            cout<<num2[j]<<" ";j++;}
        else
        {
            cout<<num1[i]<<" ";
            i++;
            j++;
        }
    }

    while(i<size1)
    {
        if(i==0||num1[i]!=num1[i-1])
            cout<<num1[i]<<" ";
        i++;
    }
     while(j<size2)
    {
        if(j==0||num2[j]!=num2[j-1])
            cout<<num2[j]<<" ";
            j++;
    }
}


int main()
{
    vector<int> num1 {3,8,8};
    vector<int> num2 {2,8,8,10,15};
    getUnion(num1,num2);
}