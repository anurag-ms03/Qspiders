#include<stdio.h>
int main()
{
    int n,i,rem=0,rev=0;
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse is %d",rev);
    return 0;
}