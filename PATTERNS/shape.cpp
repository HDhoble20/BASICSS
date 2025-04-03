#include<iostream>
using namespace std;
class shape
{
    protected:
    float radius,width,height;
    public:
    shape()
    {
        cout<<"\nconstructor called for shape class";
        width=3;
        height=10;
        radius=3;
    }
    shape(int r)
    {
        radius=r;
    }
    shape(float w,float h)
    {
        width=w;
        height=h;
    }
    virtual ~shape()
    {
        cout<<endl<<"\ndestructor of shape ";
    }
    virtual void cal_area()=0;
};
class triangle:public shape
{
    public:
    triangle()
    {
        cout<<endl<<"default for trangle";
    }
    triangle(float w,float h):shape(w,h)
    {
        cout<<endl<<"para constructor called";
    }
    ~triangle()
    {
        cout<<"\ndestructor called fro triangle";
    }
    void cal_area()
    {
       cout<<endl<<(width*height)/2;
    }
};
class circle:public shape
{
    public:
    circle()
    {

    }
    circle(int r)
    {
        radius=r;
    }
    ~circle()
    {
        cout<<endl<<"destructor for circle";
    }
    void cal_area()
    {
        cout<<endl<<3.14*radius*radius;
    }
};
int main()
{
    shape *ptr=new triangle(10,3);
    ptr->cal_area();
    delete ptr;

    shape *ptr2=new circle(3);
    ptr2->cal_area();
    delete ptr;
}