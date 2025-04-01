#include<stdio.h>
struct watch
{
    char brand[100];
    char watchName[100];
    int price;
    int warrenty;
};
void displayWatchInfo(struct watch w[],int size)
{
    int i,found;
    printf("\n-----------------------------------WATCH Data-----------------------------------\n");
    for(int i=0;i<size;i++)
    {

        printf("NAME OF BRAND:%s\n",w[i].brand);
        printf("WATCH NAME:%s\n",w[i].watchName);
        printf("PRICE IF THE WATCH:%d\n",w[i].price);
        printf("WARRENTY:%d\n",w[i].warrenty);
        printf("-----------------------------+++++++++++-----------------------------\n");
    }
}
int main()
{
    struct watch w[10];
    int size;
    printf("Enter the number of watch info u want to add :--");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("****************************************\n");
        printf("Enter the brand of the watch :--");
        scanf(" ");
        gets(w[i].brand);
        printf("Enter the name of the watch :--");
        scanf(" ");
        gets(w[i].watchName);
        printf("Enter the price of watch :--");
        scanf("%d",&w[i].price);
        printf("Enter the warrenty year of watch :--");
        scanf("%d",&w[i].warrenty);
    }
    displayWatchInfo(w,size);
    
}

