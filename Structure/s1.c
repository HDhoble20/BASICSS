#include<stdio.h>
struct student
{
    char name[100];
    char department[100];
    char course[100];
    int yearofjoining;
    int rollnumber;
};
void displayStudentInformation(struct student s[],int size)
{
    int i,found;
    printf("\n-----------------------------------Student Data-----------------------------------\n");
    for(int i=0;i<size;i++)
    {

        printf("NAME:%s\n",s[i].name);
        printf("DEPARTMENT:%s\n",s[i].department);
        printf("COURSE:%s\n",s[i].course);
        printf("YEAR OF JOINING:%d\n",s[i].yearofjoining);
        printf("ROLL NUMBER:%d\n",s[i].rollnumber);
        printf("-----------------------------+++++++++++-----------------------------\n");
    }
}
int isFound(struct student s[],int size,char search[])
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
 void displaySearchData(struct student s[],int size,char search[])
 {

    for (int i = 0; i < size; i++)
    {
        if (strcmp(s[i].name,search)==0)
        {
            printf("NAME:%s\n",s[i].name);
             printf("DEPARTMENT:%s\n",s[i].department);
             printf("COURSE:%s\n",s[i].course);
             printf("YEAR OF JOINING:%d\n",s[i].yearofjoining);
             printf("ROLL NUMBER:%d\n",s[i].rollnumber);
        }
    
    }
     
 }
int main()
{

    struct student s1[3];
    int size;
    char  search[100];
    
    printf("Enter the size of the database\n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter the name of student:\n");
        scanf(" ");
        gets(s1[i].name);
        printf("Enter the department of student:\n");
        gets(s1[i].department);
        printf("Enter the course of student:\n");
        gets(s1[i].course);
        printf("Enter the year of joining of student:\n");
        scanf("%d",&s1[i].yearofjoining);
        printf("Enter the roll number of student:\n");
        scanf("%d",&s1[i].rollnumber);
    }
    displayStudentInformation(s1,size);
    printf("Search the name in data\n");
    scanf(" ");
    gets(search);
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