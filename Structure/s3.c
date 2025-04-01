#include<stdio.h>
struct room
{
    char societyName[100];
    char flatName [100];
    int roomNo;
    int floor;
};
void displayRoomInformation(struct room s[],int size)
{
    int i,found;
    printf("\n-----------------------------------ROOM Data-----------------------------------\n");
    for(int i=0;i<size;i++)
    {

        printf("NAME OF SOCIETY:%s\n",s[i].societyName);
        printf("FLATNAME:%s\n",s[i].flatName);
        printf("FLAT NUMBER:%d\n",s[i].roomNo);
        printf("FLOOR:%d\n",s[i].floor);
        printf("-----------------------------+++++++++++-----------------------------\n");
    }
}
int isFound(struct room s[],int size,int search)
 {
  
    for (int i = 0; i < size; i++)
    {
        if (strcmp(s[i].roomNo,search)==0)
        {
            return 1;
        }
    
    }
    return 0;
 }
 void displaySearchData(struct room s[],int size,int search)
 {

    for (int i = 0; i < size; i++)
    {
        if (strcmp(s[i].roomNo,search)==0)
        {

        printf("NAME OF SOCIETY:%s\n",s[i].societyName);
        printf("FLATNAME:%s\n",s[i].flatName);
        printf("FLAT NUMBER:%d\n",s[i].roomNo);
        printf("FLOOR:%d\n",s[i].floor);
     
        }
    
    }
     
 }
int main()
{

    struct room s1[3];
    int size;
    int search;
    
    printf("Enter the size of the database\n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("ENTER THE NAME OF SOCIETY:\n");
        scanf(" ");
        gets(s1[i].societyName);
        printf("ENTER THE FLAT NAME:\n");
        gets(s1[i].flatName);
        printf("ENTER THE FLAT NO:\n");
        scanf("%d",&s1[i].roomNo);
        printf("ENTER THE FLOOR OF THE FLAT:\n");
        scanf("%d",&s1[i].floor);
       
    }
    displayRoomInformation(s1,size);
    printf("Search the flat no in data\n");
    scanf(" %d",&search);
    
    int ok=isFound(s1,size,search);
 { 
    if (ok==1)
    {
        printf("Data found!!!!!\n");
    }
    else
    {
        printf("Data not found");
    } 
}
 
 displaySearchData(s1,size,search);
return 0;
}