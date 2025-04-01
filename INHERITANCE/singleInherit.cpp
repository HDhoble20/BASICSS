#include<iostream>
using namespace std;
class Bird{
    public:
  void fly(){
    cout<<"BIRD IS FLYING"<<endl;
  }
};
class Crow:public Bird{
    public:
   void eat(){
    cout<<"CROW IS EATING"<<endl;
   }
};
int main()
{
    Bird b1;
    
        b1.fly();
    Crow c1;
        c1.fly();
        c1.eat();
    
}
