#include<stdio.h>
int main(){
    int i,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",2*i-1);
        printf("\n");
    }
    return 0;
}