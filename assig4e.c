#include<stdio.h>
int main(){
    int i,n;
    printf("The first 10 odd natural numbers in reverse order: ");
    scanf("%d",&n);
    for(i=10;i>=n;i--)
    {
        printf("%d",2*i-1);
        printf("\n");
    }
    return 0;
}