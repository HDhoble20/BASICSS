#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=i;j<5;j++)
        {
            cout<<" ";
        }
        for(j=i;j<5;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}