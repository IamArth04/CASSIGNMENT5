#include<stdio.h>
int main(){
    int i,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",2*i);
        printf("\n");
    }
    return 0;
}