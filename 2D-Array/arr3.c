#include<stdio.h>
    // Column is mandatory
    void firstMatrics(int A1[][100],int r,int c,int A2[][100])
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
     
        printf("******EQUAL OR NOT OF MATRICES IS*******\n");
           int flag=1;
        for (int i = 0; i < r; i++)
        { 
            for (int j = 0; j < c; j++)
            {
               if (A1[i][j]!=A2[i][j])
               {
                  flag=0;
                  break;
               }
            }  
        }
         if (flag==0)
         {
            printf("   MATRICES ARE NOT EQUAL\n");

         }
         else
         {
            printf("    MATRICES ARE EQUAL\n");
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
        
        firstMatrics(arr1,row,column,arr2);
        
        
        return 0;
    }
    