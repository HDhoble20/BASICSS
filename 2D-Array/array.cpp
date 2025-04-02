#include<iostream>
using namespace std;
void accept_array_element(int *);
void display_array_element(int *);
int main()
{
    int i, n;


    int arr[5]={22,22,22,22,22};
    accept_array_element(arr);
    display_array_element(arr);


}

void display_array_element(int *ar)
{
    for(int i=0; i<5; i++)
    {
        cout<<" "<<ar[i];
    }
}

void accept_array_element(int *ptr)
{
    int i;
    cout<<"\n Enter Array Elements:  ";
      
    for(i=0;i<5; i++)
    {
        cin>>ptr[i];
    }
}