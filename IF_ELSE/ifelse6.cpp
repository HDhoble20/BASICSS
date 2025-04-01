#include<iostream>
int main()
{
    int year;
using namespace std;
cout<<"ENTER NUM :-"<<endl;
cin>>year;
if(year%4==0)
cout<<"YEAR IS LEAP YEAR"<<endl;
else if(year%400==0)
cout<<"YEAR IS LEAP YEAR"<<endl;
else
cout<<"YEAR IS NOT LEAP YEAR"<<endl;
return 0;
}