#include<stdio.h>
    // Column is mandatory
    void firstMatrics(int A[][100],int r,int c)
    {
     for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++){
 
                printf(" %d ",A[i][j]);
            }
            printf("\n");
        } 
        int sum=0;
     for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++)
        {
            if (A[i]==A[j])
            {
                sum=sum+A[i][j];
            }
            
        }
       
     }
        printf("\nSum of major diagonal is %d\n",sum);  
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
        printf("\n-**** matrics****-\n");
        
        firstMatrics(arr1,row,column);
        
        
        return 0;
    }
    