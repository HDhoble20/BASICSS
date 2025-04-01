#include<stdio.h>
struct watch 
{
char name[40];
char brand[40];
int price;
};
void display(struct watch w [],int size)
{
   
    printf("---------------------------------------------\n");
  for ( int i = 0; i < size; i++)
  {
    printf("Name=%s\n",w[i].name);
    printf("Brand=%s\n",w[i].brand);
    printf("Price=%d\n",w[i].price);
  }
}

int isFound(struct watch w[],int size,char search[])
{
 for (int i = 0; i < size; i++)
 {
    if (strcmp (w[i].name,search)==0)
    {
        return 1;
    }
 }
 return 0;
}
void displayfound(struct watch w[],int size,char search[])
{
    for (int i = 0; i < size; i++)
 {
    if (strcmp (w[i].name,search)==0)
    {
      printf("Name=%s\n",w[i].name);
    printf("Brand=%s\n",w[i].brand);
    printf("Price=%d\n",w[i].price);
    }
 }
}

main()
{
    struct watch w[100];
    int size;
    char search[20];
    printf("Enter teh size");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Name\n");
        scanf(" ");
        gets(w[i].name);
        printf("brand\n");
        scanf(" ");
        gets(w[i].brand);
        printf("price\n");
        scanf("%d",&w[i].price);
    }  
        display(w,size);
        printf("Enter the name to search data\n");
        scanf(" ");
        gets(search);
       int ok=isFound(w,size,search);
       {
           if (ok==1)
          {
            printf("Found");
          }
       else
          {
            printf("not found");
          }
       }
       displayfound(w,size,search);
    }
    
    


