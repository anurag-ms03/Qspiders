#include<stdio.h>
int main()
{
    int i,j,l,k;
    printf("Enter the value of K\n");
    scanf("%d",&k);
    int a[] = {3,5,8,6,7,10,4,9,11,12};
    int n = sizeof(a)/sizeof(a[0]);
       for(i=0;i<n-2;i++){
           for(j=i+1;j<n-1;j++){
                for(l=j+1;l<n;l++){
                    if(a[i]+a[j]+a[l]==k)
                     printf("(%d %d %d)\n",a[i],a[j],a[l]);
                }
         }
   }
    return 0;
}