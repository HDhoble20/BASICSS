#include<iostream>
using namespace std;
class Ox{
    public:
   void parent1()
   {
    cout<<"OX IS MALE PARENT"<<endl;
   }
};
class Cow{
    public:
    void parent2()
    {
        cout<<"COW IS FEMALE PARENT"<<endl;
    }
};
class Calf:public Ox,public Cow{
    public:
    void child()
    {
        cout<<"CALF IS CHILD OF OX AND COW"<<endl;
    }

};
int main()
{
    Ox o1;
    o1.parent1();
    Cow c1;
    c1.parent2();
    Calf ca1;
    o1.parent1();
    c1.parent2();
    ca1.child();
}