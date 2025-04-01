#include<iostream>
using namespace std;
class Bird{
    public:
  void fly(){
    cout<<"BIRD IS FLYING"<<endl;
  }
};
class Crow:public Bird
{
    public:
    void drink(){
        cout<<"CROW IS DRINKING WATER"<<endl;
    }
};
class Sparrow:public Bird
{
    public:
    void eat()
    {
        cout<<"SPARROW IS EATING A FOOD"<<endl;
    }
};
int main()
{
    Bird b1;
    b1.fly();
    Crow c1;
    b1.fly();
    c1.drink();
    Sparrow s1;
    b1.fly();
    s1.eat();
}