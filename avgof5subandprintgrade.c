#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float avg;
    printf("enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("the average of 5 subjects:%f",avg);
    if(avg>90)
    {
        printf("A+");
    }
        else if(avg>=90)
        {
            printf("A");
        }
        else if(avg>=80)
        {
            printf("B");
        }
        else if(avg>=70)
        {
            printf("C");
        }
        else if(avg>=60)
        {
            printf("D");
        }
        else
        {
            printf("Fail");
        }
}
        
