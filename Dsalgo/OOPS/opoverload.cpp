#include<iostream>
#include<algorithm>
using namespace std;

class Add{
    public:
        int val1,val2;
        void getData(int val1,int val2){
            this->val1=val1;
            this->val2=val2;
        }
    Add operator +(Add obj2);   
    void display() {
        cout<<val1<<" "<<val2;
    }
};
Add Add::operator +(Add obj2){
    Add temp;
    temp.val1=val1+obj2.val1;
    temp.val2=val2+obj2.val2;
    return temp;
}

int main(){
    Add a,b;
    a.getData(20,30);
    b.getData(40,10);
    Add c=a+b;
    c.display();
}