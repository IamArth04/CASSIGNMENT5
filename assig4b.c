#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        printf("\n");
        i++;
    }
    return 0;
}