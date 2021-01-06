#include<iostream>
#include<algorithm>
using namespace std;


void produceVaccine(int d1,int v1,int d2,int v2,int p)
{
    if(d1==d2)
        cout<<(d1-1)+ceil(float(p/(v1+v2)));
    else
    {
        int count=0;
        int no_work=min(d1,d2)-1;
        while(d1!=d2)
        {
            if(d1<d2)
            {
                p=p-v1;
                d1++;
                count++;
            }
            else
            {
                p=p-v2;
                count++;
                d2++;
            }
            
        }
        cout<<count+ceil(float(p/(v1+v2)))+no_work;
    }
    
}



int main()
{
    int v1,d1,v2,d2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    produceVaccine(d1,v1,d2,v2,p);
    
}