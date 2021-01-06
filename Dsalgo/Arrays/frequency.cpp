#include<iostream>
#include<algorithm>
using namespace std;

void frequency(int arr[],int n)
{
    int freq=1;
    int i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<":"<<freq<<endl;
        i++;
        freq=1;
    }
}

void printFreq(int arr[], int n)
{
	int freq = 1, i = 1;

	while(i <= n)
	{
		while(i < n && arr[i] == arr[i - 1])
		{
			freq++;
			i++;
		}

		cout<<arr[i - 1] << " " << freq << endl;

		i++;
		freq = 1;
	}
}
int main()
{
    int arr[]={10,10,10,20,20,30,30};
    frequency(arr,7);
    cout<<endl;
    printFreq(arr,7);
}