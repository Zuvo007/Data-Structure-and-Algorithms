#include<iostream>
#include<list>
#include<vector>
using namespace std;

class HashTable
{
    private:
        int bucket;
       list<int> *table;
    public:
    HashTable(int b)
    {
        bucket=b;
        table=new list<int>[bucket];
    }
    
    bool search(int key);
    void insert(int key);
    void erase(int key);
};
bool HashTable::search(int key)
{
    int i=key%bucket;
    for(auto x:table[i]){
        if(x==key)
            return true;}
    return false;

}

void HashTable::insert(int key)
{
    int i=key%bucket;
    table[i].push_back(key);
}

void HashTable::erase(int key)
{
    int i=key%bucket;
    table[i].remove(key);
}

int main()
{
    HashTable ht(8);
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    if(ht.search(30))
        cout<<"true";
    else
        cout<<"false";
    ht.erase(30);
    if(ht.search(30))
        cout<<"true";
    else
        cout<<"false";



}