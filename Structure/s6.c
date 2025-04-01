#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void AddBook();
void Bookrecord();
void Searchstudent();
void Deletestudent();
struct student
{
    char Book_name[20];
    char Publication_name[20];
    char Author_name[20];
    int Book_price;
    char section[10];
    
};
int main()
{
    int choice;
    while(choice!=5)
    {
        printf("\t\t\t\t\t\t LIBRARY MANAGEMENT SYSTEM\n");
        printf("\t\t\t\t\t----------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t1.Add Book.\n");
        printf("\t\t\t\t\t\t\t2.Book Record.\n");
        printf("\t\t\t\t\t\t\t3.Search Book.\n");
        printf("\t\t\t\t\t\t\t4.Delete Book.\n");
        printf("\t\t\t\t\t\t\t5.Exit.\n");
        printf("\t\t\t\t\t----------------------------------------------------\n");
        printf("\t\t\t\t\t");
        printf("Enter Choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            AddBook();
            break;
        case 2:
            Bookrecord();
            break;

        }
    }
}
void AddBook()
{
    char variable;
    FILE *fp;
    struct student info;
    printf("\n\n");
    do{
    printf("\t\t\t\t\t\tADD BOOK INFORMATION\n\n");
    fp=fopen("/home/himanshu/Desktop/FILES/BOOK_INFO.txt","w");
    printf("\t\t\t\t\t\t1.Enter The Name Of Book : ");
    scanf(" ");
    gets(info.Book_name);
    printf("\t\t\t\t\t\t2.Enter The Publication Of The Book: ");
    scanf(" ");
    gets(info.Publication_name);
    printf("\t\t\t\t\t\t3.Enter The Author Of The Book: ");
    scanf(" ");
    gets(info.Author_name);
    printf("\t\t\t\t\t\t4.Enter The Price Of The Book: ");
    scanf("%d",&info.Book_price);
    printf("\t\t\t\t\t\t5.Enter The Sectio To Store Book In: ");
    scanf(" ");
    gets(info.section);
    if(fp==NULL)
    {
        fprintf(fp,"\t\t\t can't open file \n");
    }
    else
    {
        printf("\t\t\t Recored Stored Successfully \n");
    }
    //fwrite function = if we have to write entire code at a time
    //fwrite(&info,sizeof(struct student),1,fp);
         fprintf(fp," %30s",info.Book_name);
         fprintf(fp,"%30s",info.Publication_name);
         fprintf(fp,"%30s",info.Author_name);
         fprintf(fp,"%30d",info.Book_price);
         fprintf(fp,"%30s",info.section);
    fclose(fp);

    printf("\t\t\tyou want to create another record? if yes then enter Y if no then enter N\n");
    scanf("%s",&variable);
}while(variable=='Y');
}
void Bookrecord()
{
    FILE *fp=NULL;
    struct student info;
    fp=fopen("/home/himanshu/Desktop/FILES/BOOK_INFO.txt","r");
    if (fp==NULL)
    {
        fprintf(fp,"FILE NOT CREATED....\n");
    }
    else
    {
        printf("\t\t\tRECOREDS\n\n");
        exit(1);
    }
   /* while(fread(&info,sizeof(struct student),1,fp));
    {
         fgetc("\t\t\t\t\t\t Student Name: %s",info.Book_name);
         fgetc("\t\t\t\t\t\t Student Name: %s",info.Publication_name);
         fgetc("\t\t\t\t\t\t roll num: %s",info.Author_name);
         getc("\t\t\t\t\t\t board: %d",info.Book_price);
         fgetc("\t\t\t\t\t\t percentage: %s",info.section);
    }*/

    fclose(fp);
}