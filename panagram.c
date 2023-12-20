#include<stdio.h>
#define MAX 256
int main()
{
    int count[MAX]={0};
    char str[200];
    int i,len,status=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i];i++){
         len++;
    }
    printf("%s\n",str);
    printf("%d\n",len);
    for(i=0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=90){
          count[str[i]]++;
          count[str[i]+32]++;
        }
        else if(str[i]>=97 && str[i]<=122){
        count[str[i]]++;
        count[str[i]-32]++;
        }
    }
   
    for(i=65;i<=90;i++)
    {
        if(count[i]==0 && count[i+32]==0){
           status=1;
            break;
        }
    }
    for(i=65;i<=122;i++)
    {
        printf("%d ",count[i]);
    }
    if(status)
      printf("\nthe string is not a panagram");
    else
      printf("\nthe string is a panagram");
}