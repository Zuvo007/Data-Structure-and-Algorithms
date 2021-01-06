#include<iostream>
using namespace std;

bool isPalindrome(string word,int start,int end)
{
    if(start>=end)
        return true;
    if(word[start]==word[end])
        return isPalindrome(word,start+1,end-1);  //abbcbba
    else
    {
        return false;
    }
    
}

int main()
{
    string str="abbcbba";
    if(isPalindrome(str,0,str.length()-1))
        cout<<"yes";
    else
    {
        cout<<"no";
    }
    

}