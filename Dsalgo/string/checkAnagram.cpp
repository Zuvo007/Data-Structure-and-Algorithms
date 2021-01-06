#include<iostream>
#include<cstring>
using namespace std;

bool isAnagram(string s1,string s2){
    int nums1[26]={0};
    int nums2[26]={0};
    bool flag=false;
    for(int i=0;i<s1.length();i++){
        nums1[s1[i]-'a']++;
        nums2[s2[i]-'a']++;
    }

    for(int i=0;i<26;i++){

        if(nums1[i]>0 && nums2[i]>0){
            if(nums1[i]==nums2[i]){
                //have a track for each elements
                    flag=true;
            }
            else
                flag=false;

        }
    }
   return flag;
        
}

int main()
{
    string s1="aaacb";
    string s2="cabaa";
    if(isAnagram(s1,s2))
        cout<<"Yes";
    else
        cout<<"No";

}