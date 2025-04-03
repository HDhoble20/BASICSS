#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            cout<<"*";
        }      
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=i;j<5;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
           
    }
    for(i=0;i<5;i++)
    {
        
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=i;j<4;j++)
        {
            cout<<" ";
        }
        for(j=i;j<4;j++)
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
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             cout<<"*";
//         }
       
//         for(j=1;j<=i;j++)
//         {
//             cout<<" ";
//         }
//         for(j=i;j<5;j++)
//         {
//             cout<<"*";
//         }
//         for(j=1;j<=i;j++)
//         {
//             cout<<" ";
//         }
//         cout<<"\n";
//     }
    
// }