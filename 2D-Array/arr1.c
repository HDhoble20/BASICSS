#include<stdio.h>
    // Column is mandatory
    void sumOFmatrics(int A1[][100],int r,int c,int A2[][100],int A3[][100])
    {
     for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++){
 
                printf(" %d ",A1[i][j]);
            }
            printf("\n");
        }
        printf("*****second matrics*****\n");
    
    
     for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++){
 
                printf(" %d ",A2[i][j]);
            }
            printf("\n");
        }
     
        printf("******SUM OF MATRICES IS*******\n");
        for (int i = 0; i < r; i++)
        { 
            for (int j = 0; j < c; j++)
            {
                A3[i][j]=A1[i][j]-A2[i][j];
                printf(" %d ",A3[i][j]);
            }
            printf("\n");
        }
    }
     //MAIN FUNCTION
    int main()
    {
        int arr1[100][100]; int row,column;
        printf("\nEnter Row \n");
        scanf("%d",&row);
 
        printf("Enter Column \n");
        scanf("%d",&column);
 
 
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++){
                printf("Enter \n");
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("\nENTER VALUES FOR SECOND MATRIX\n");
        
        int arr2[100][100]; 
        printf("\nEnter Row \n");
        scanf("%d",&row);
 
        printf("Enter Column \n");
        scanf("%d",&column);
 
 
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++){
                printf("Enter \n");
                scanf("%d",&arr2[i][j]);
            }
        }
        printf("\n-****first matrics****-\n");
        int arr3[100][100];
 
        sumOFmatrics(arr1,row,column,arr2,arr3);
        
        
        return 0;
    }
    