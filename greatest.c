#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three no");
    scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
       {
       printf("a is biggest");
       }
       else if(b>c)
       {
       printf("b is biggest");
       }
       else
       {
       printf("c is biggest");
       }
}

