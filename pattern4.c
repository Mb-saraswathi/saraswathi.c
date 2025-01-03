#include<stdio.h>
int main()
{
    int n,count=1,i,j;
    printf("enter char:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",i+65);
        }
        printf("\n");
    }
    return 0;
}
