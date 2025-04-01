#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int count_like_dislike (char A[], char P[]) {
    // Write your code here
    int count=0;
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]==P[i])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

int main() {
    char A[11],P[11];
    scanf("%s", A);
    scanf("%s", P);
    int out_ = count_like_dislike(A, P);
    printf("%d", out_);
}