#include<iostream>
#include<vector>
using namespace std;

class HashTable
{

int size,capacity;
int *arr;
public:
    HashTable(int cap)
    {
        capacity=cap;
        size=0;
        for(int i=0;i<capacity;i++)
            arr[i]=-1;
    }
    int hashFunction(int key);
    bool insert(int key);
    bool search(int key);
    bool erase(int key);

};
int HashTable::hashFunction(int key)
    return key%capacity;

bool HashTable::insert(int key)
{   if(size==capacity)
        return false;
    int i=HashTable::hashFunction(key);
    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
        i=(i+1)%capacity;
    if(arr[i]==key)
        return false;
    else
    {
        arr[i]=key;
        size++;
        return true;
    }    
}

bool HashTable::erase(int key)
{
    int i=HashTable::hashFunction(key);
    while(arr[i]!=-1)
    {
        if(arr[i]==key){
            arr[i]=-2;
            return true;}
    }   
}

bool HashTable::search(int key)
{
    int i=HashTable::hashFunction(key);
    int h=i;
    while(arr[i]!=-1)
    {
        if(arr[i]==key)
            return true;
        i=(i+1)%capacity;
        if(i==h)
            return false;
    }   
    return false;
}