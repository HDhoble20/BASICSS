#include<iostream>
int main()

{
    int n1,n2,n3,res;
using namespace std;
cout<<"ENTER NUM 1:-"<<endl;
cin>>n1;
cout<<"ENTER NUM 2:-"<<endl;
cin>>n2;
cout<<"ENTER NUM 3:-"<<endl;
cin>>n3;
if(n1>n2||n1>n3)
cout<<"NUM 1 IS GREATER"<<endl;
else if(n2>n3)
cout<<"NUM 2 IS GREATER"<<endl;
else
cout<<"NUM 3 IS GREATER"<<endl;
return 0;
}