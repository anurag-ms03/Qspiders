#include<stdio.h>
int main()
{   
    int i,k,l,j,temp;
    int a[] = {2,20,10,5,16,56,87};
    int n = sizeof(a)/sizeof(a[0]);
    printf("\nenter the number of times to rotate\n");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
         
        temp = a[0];
        for(j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[n-1]=temp;
         for(l=0;l<n;l++){
             printf("%d\t",a[l]);
        }
        printf("\n");
    }
        
}