#include <iostream>    
using namespace std;    
class Animal {                                          //  base class declaration.  
    public:    
    string color = "Black";
    virtual void HelloWorld(){
        cout<<"Hello World Animals";
    }   
};     
class Dog: public Animal                       // inheriting Animal class.  
{      
 public:    
    string color = "Grey"; 
    void HelloWorld(){
        cout<<"Hello World Dogs";
    }       
};    
int main(void) {    
     Animal *a;
     Dog d;
    a=&d;
     cout<<a->color;
     cout<<" "<<d.color<<" ";
     a->HelloWorld();
}    

