//hybrid inheritance ->combination of more than one type of inheritance 

#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        void getDataOfA(){
            cout<<"Enter a data for class A:";
            cin>>a;
        }
        int getAccessToA(){
           int data=a;
           return data;
        }
};

class B:public A{
    protected:
        int b;
    public:
        void getDataOfB(){
            cout<<"Enter a data for class B:";
            cin>>b;
        }
};

class C{
    protected:
        int c;
    public:
        void getDataOfC(){
            cout<<" Enter a data for class C: ";
            cin>>c;
        }
};

class D:public C,public B{
    protected:
        int d;
    public:
    void getResult(){
        getDataOfA();
        getDataOfB();
        getDataOfC();
        
    
        cout<<"Ultimate result will be :"<<getAccessToA()*b*c<<endl;
    }
};

//driver code
int main(){
    D d;
    d.getResult();
}