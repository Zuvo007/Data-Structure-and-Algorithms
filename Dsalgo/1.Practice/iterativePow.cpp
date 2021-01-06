#include<iostream>
using namespace std;

int iterativePower(int number,unsigned int power)
{
    int res=1;
    while(power>0)
    {
        if(power%2!=0)
        {
            res=number*res;
        }
        power=power/2;
        number=number*number;
    }
    return res;

}
int main()
{
    cout<<iterativePower(2,3);
}