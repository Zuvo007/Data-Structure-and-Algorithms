#include<iostream>
#include<vector>
using namespace std;


vector<int> mergeTwoArrays(vector<int> num1,vector<int> num2)
{
    int i=0,j=0;
     vector<int> container;
    int size1=num1.size();
    int size2=num2.size();
    vector<int> res;
    while(i<size1 &&j<size2)
                             
    {
        if(num1[i]<num2[j]){
            if(i>0 && num1[i]==num1[i-1])
                i++;
            else{
                //cout<<num1[i++]<<" ";
                res.push_back(num1[i]);
                i++;}
        }
        else{
            if(j>0 && num2[j]==num2[j-1])
                j++;
            else{
              // cout<<num2[j++]<<" ";
              res.push_back(num2[j]);
              j++;}
        }
    }
    while(i<size1){

        if(i>0 && num1[i]==num1[i-1])
            i++;
        else{
            //cout<<num1[i++]<<" ";
            res.push_back(num1[i]);
            i++;}
    }
    while(j<size2){
        if(j>0 && num2[j]==num2[j-1])
                j++;
        else{
        
            //cout<<num2[j++]<<" ";
            res.push_back(num2[j]);
            j++;}
    }
    return res;

    
}

void checkDuplicates(vector<int> res)
{
   for(int i=1;i<res.size();i++)
   {
       int count=0;
       if(res[i]==res[i-1])
       {
           count++;
           cout<<res[i]<<" ";
       }
   }
}


int main()
{
    vector<int> num1 {1,1,3,3,3};
    vector<int> num2 {2,3,5,7};
    vector<int> res;
    res=mergeTwoArrays(num1,num2);
    checkDuplicates(res);
    
}


