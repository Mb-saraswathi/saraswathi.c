#include <stdio.h>

int main() 
{
    int a,b;
    char op;
    printf("enter a, b and op value :");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+' : printf("the addition %d:",a+b);
                   break;
        case '-': printf("the subtraction %d:",a-b);
                  break;
        case '*': printf("the multiplication  %d:",a*b);
                  break;
        case '%': printf("the division %d:",a%b);
                  break;
       case '/': printf("the remainder %d:",a/b);
                 break;
        default : printf("invalid operator");
                 break;
    }
}
