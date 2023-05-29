#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter your a:->");
    scanf("%d",&a);
    printf("enter your b:->");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d \t %d",a,b);
}