#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,n,rem,power,i,temp;
    scanf("%d",&n);
    temp=n;
    for(i=0;n!=0;i++){
          n=n/10;
          power++;
    }
    for(i=0;n!=0;i++){
        rem=n%10;
        sum=sum+pow(rem,power);
        n=n/10;
    }
    if(sum==temp)
       printf("\nis armstrong");
    else
       printf("\nnot armstrong");
}