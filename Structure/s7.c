#include<stdio.h>
struct movie
{
    char Mname[100];
    char Mactor[100];
    char Mactress[100];
    int rating;
    double IMDBrating;
};
void displayMovieinformation(struct movie m[],int size1)
{
    printf("\n-----------------------------------movie Data-----------------------------------\n");
    for(int i=0;i<size1;i++)
    {

        printf("NAME:%s\n",m[i].Mname);
        printf("MACTOR:%s\n",m[i].Mactor);
        printf("MACTORESS:%s\n",m[i].Mactress);
        printf("RATING:%d\n",m[i].rating);
        printf("IMDB RATING:%lf\n",m[i].IMDBrating);
        printf("-----------------------------New-----------------------------\n");
    }
}
int isFound(struct movie m[],int size2,char search[])
{
    for(int i=0;i<size2;i++)
        {
            //to compare  name we use {strcmp}.
            if(strcmp(m[i].Mname,search)==0)
            {
                return 1;
            }
        }
        return 0;
}
void displayFounddata(struct movie m[],int size,char search[])
{
    int i=0;
         if(strcmp(m[i].Mname,search)==0)
         {
            printf("NAME:%s\n",m[i].Mname);
            printf("MACTOR:%s\n",m[i].Mactor);
            printf("MACTORESS:%s\n",m[i].Mactress);
            printf("RATING:%d\n",m[i].rating);
            printf("IMDB RATING:%lf\n",m[i].IMDBrating);
            printf("-----------------------------New-----------------------------\n");
         }
}
int main()
{

    struct movie m1[3];
    int size;
    char search[100];
    printf("Enter the how many movies do you want to add :\n ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter the name of movie:\n");
            scanf(" ");
        gets(m1[i].Mname);
        printf("Enter the actor:\n");
        gets(m1[i].Mactor);
        printf("Enter the actress:\n");
        gets(m1[i].Mactress);
        printf("Enter the rating \n");
        scanf("%d",&m1[i].rating);
        printf("Enter the IMDB rating:\n");
        scanf("%lf",&m1[i].IMDBrating);
    }
    displayMovieinformation(m1,size);
    printf("Enter the name do you want check:\n");
    scanf(" ");
    gets(search);
   int O=isFound(m1,size,search);
    if(O==1)
    {
        printf("Data found::\n");
    }
    else
    {
        printf("Data not found::\n");
    }
    displayFounddata(m1,size,search);
}