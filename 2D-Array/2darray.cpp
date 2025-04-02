#include<iostream>
using namespace std;
void accept_array_elements(int (*ptr)[3]);
void display_array_elements(int (*ptr)[3]);
void display_as1dArray(int *);
int main()
{
    int arr[3][3];
    accept_array_elements(arr);
    // display_array_elements(arr);
    display_as1dArray((int *)arr);


    return 0;


}

void accept_array_elements(int (*p)[3])
{
    int j,i;
     for(i=0 ;i<3; i++)
     {
        
        for(j=0; j<3; j++)
        {
            cout<<" \n enter number "<<i<<" "<<j<<":- ";
            cin>>p[i][j];
        }
        
     }    
}

void display_array_elements(int (*p)[3])
{
    int j,i;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<" "<<p[i][j];
        }
        cout<<"\n ";
    }
}


void  display_as1dArray(int *a)
{
  int i;
  for(i=0; i<9; i++)
  {
    cout<<" "<<a[i];
  }
}
