#include<stdio.h>
int main(){
    int i,n;
    printf("The first 10 even Natural Numbers in Reverse Order: ");
    scanf("%d",&n);
    for(i=10;i>=n;i--)
    {
        printf("%d",2*i);
        printf("\n");
    }
    return 0;
}