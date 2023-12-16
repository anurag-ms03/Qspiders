#include<stdio.h>
int main()
{
    int n,L;
    scanf("%d",&n);
    L=(n%9 == 0)? 9 : n%9;
    printf("%d",L);
}