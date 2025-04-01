#include<iostream>
int main()
{
    int n;
using namespace std;
cout<<"ENTER NUM :-"<<endl;
cin>>n;

if(n%5==0&&n%11==0)
cout<<"NUM IS DIVISIBLE OF BOTH"<<endl;
else if(n%11==0)
cout<<"NUM  IS DIVISIBLE OF 11"<<endl;
else if(n%5==0)
cout<<"NUM IS DIVISIBLE OF 5"<<endl;
else
cout<<"NUM IS NOT DIVISIBLE OF 5 or 11"<<endl;
return 0;
}