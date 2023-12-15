#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("%d %d\n",a,b);
    a^=b^=a^=b;
    printf("%d %d",a,b);
    

}