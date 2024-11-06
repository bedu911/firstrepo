#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,divi,rem;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    divi=a/b;
    rem=a%b;
    printf("the sum of %d and %d =%d\n",a,b,sum);
    printf("the difference of %d and %d =%d\n",a,b,sub);
    printf("the multiplication  of %d and %d =%d\n",a,b,mul);
    printf("the quotient of %d and %d =%d\n",a,b,divi);
    printf("the remainder we get after the division of %d and %d =%d",a,b,rem);

    return 0;
}