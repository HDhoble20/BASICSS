#include<iostream>
using namespace std;
class Bird{
    public:
   void fly()
   {
    cout<<"BIRD IS FLYING"<<endl;
   }
   
};
class Crow:public Bird{
    public:
    void eat(){
        cout<<"CROW IS EATING"<<endl;
    }
};
class BabyCrow: public Crow{
    public:
    void cry(){
        cout<<"BABY CROW IS CRYING"<<endl;
    }
};
int main()
{
 Bird b1;
 b1.fly();
 Crow c1;
 b1.fly();
 c1.eat();
 BabyCrow bc1;
 b1.fly();
 c1.eat();
 bc1.cry();
}