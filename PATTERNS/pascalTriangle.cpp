#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<" ";
        }
        int n=1;
        for(k=0;k<=i;k++)
        {
            cout<<n<<" ";
            n=n*(i-k)/(k+1);
        }
        cout<<"\n";
    }
    return 0;
}