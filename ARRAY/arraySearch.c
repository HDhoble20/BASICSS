#include<stdio.h>

void displayArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

int isFound(int arr[],int size,int ele){
        for(int i=0;i<size;i++){
           if(arr[i]==ele){
            return 1;
           }
        }
        return 0;
}


int main()
{
   int arr[100];
   int size; int element;
   printf("Size Of Array \n");
   scanf("%d",&size);

   for(int i=0;i<size;i++){
    printf("Enter Element \n");
    scanf("%d",&arr[i]);
   }

   displayArray(arr,size);

   printf("Search An Element in an Array Please Enter \n");
   scanf("%d",&element);

   int ok=isFound(arr,size,element);

   if(ok==1){
    printf("Found !!!");
   }
   else{
    printf("NOT FOUND !!!");
   }
    return 0;
}