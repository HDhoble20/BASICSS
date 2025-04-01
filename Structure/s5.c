#include<stdio.h>
struct book
{
    char publication[100];
    char bookName[100];
    char author[100];
    int price;
    
};
void displayBookInfo(struct book b[],int size)
{
    printf("\n-----------------------------------BOOK Data-----------------------------------\n");
    for(int i=0;i<size;i++)
    {

        printf("NAME OF PUBLICATION:%s\n",b[i].publication);
        printf("BOOK NAME:%s\n",b[i].bookName);
        printf("AUTHOR OF THE BOOK:%s\n",b[i].author);
        printf("PRICE:%d\n",b[i].price);
        printf("-----------------------------+++++++++++-----------------------------\n");
    }
}
 main()
{
    struct book b1[10];
    int size;
    printf("Enter the number of books info u want to add :--");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("****************************************\n");
        printf("Enter the publication of the book :--");
        scanf(" ");
        gets(b1[i].publication);
        printf("Enter the name of the book :--");
        scanf(" ");
        gets(b1[i].bookName);
        printf("Enter the author of book :--");
        scanf(" ");
        gets(b1[i].author);
        printf("Enter the price of book :--");
        scanf("%d",&b1[i].price);
    }
    displayBookInfo(b1,size);
    
}

