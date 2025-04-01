#include<stdio.h>
struct person
{
    char name[20];
    int pNum;
    char add[20];
    int pincode;


};
void     personInformatoin(struct person s[],int size)
{
    int i,found;
    printf("-----------------------data-----------------------\n");
   for(i=0;i<size;i++)
    {

      printf("Name=%s\n",s[i].name);

       printf("Phone Num=%d\n",s[i].pNum);

        printf("Address=%s\n",s[i].add);

         printf("Pincode=%d\n",s[i].pincode);
            printf("-----------------------new person-----------------------\n");

    }
}

    int isfound(struct person s[],int size,char search[])
    {
      for (int i = 0; i < size; i++)
      {
       if (strcmp(s[i].name,search)==0)
       {
         return 1;
       }
      }
      return 0; 
    }
   void displaySearchData (struct person s[],int size,char search[])
   {
    for (int i = 0; i < size; i++)
      {
       if (strcmp(s[i].name,search)==0)
       {
        printf("Name=%s\n",s[i].name);

       printf("Phone Num=%d\n",s[i].pNum);

        printf("Address=%s\n",s[i].add);

         printf("Salary=%d\n",s[i].pincode);
         
       }
      }
      return 0; 
    }
   

int main()
{
    struct person s[10];
    int size;
      char search[20];
    printf("enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
      printf("enter the name:\n");
      scanf("%s",&s[i].name);
      printf("enter the Phone NUm:\n");
      scanf("%d",&s[i].pNum);
      printf("enter the Address:\n");
      scanf("%s",&s[i].add);
      printf("enter the pincode:\n");
      scanf("%d",&s[i].pincode);



    }
    personInformatoin(s,size);
    printf("SEARCH THE NAME IN DATA\n");
    scanf(" ");
    gets(search);
    int ok=isfound(s,size,search);
    {
      if (ok==1)
      {
        printf("Data found!!!!\n");
      }
      else
      {
        printf("Data not found!!!");
      }
    }
    displaySearchData(s,size,search);

}