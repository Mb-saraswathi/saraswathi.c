#include <stdio.h>
#include<math.h>
int main() 
{
    int a,b,c,d;
    float r1,r2;
    printf("enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=((b*b)-(4*a*c));
    printf("the value of d is:%d\n",d);
    if(d>0)
    {
        printf("real amd distinct\n");
        r1=(-b+sqrt(d)/(2*a));
        r2=(-b-sqrt(d)/(2*a));
        printf("r1,r2 are:%f%f\n",r1,r2);
    }
    else if(d<0)
    {
        printf("real and imaginary\n");
    }
    else
    {
        printf("real and equal\n");
        r1=r2=(b/(2*a));
        printf("r1,r2 are:%f%f\n",r1,r2);
    }
    
}
    
