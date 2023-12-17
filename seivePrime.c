#include<stdio.h>
void seivePrime(int n){
    int Primes[n+1];
    int i,j;
    for(i=0;i<=n;i++)
        Primes[i]=1;
    for(i=2;i*i<n;i++){
        if(Primes[i]==1){
            for(j=i*i;j<=n;j=j+i)
               Primes[j]=0;
        }
    }
    for(i=2;i<=n;i++){
        if(Primes[i]==1)
           printf("%d\t",i);
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  seivePrime(n);
  return 0;
}