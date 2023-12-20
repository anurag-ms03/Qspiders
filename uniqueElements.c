#include <stdio.h>

int main()
{   
    int j,count;
    int a[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};
    int length = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < length; i++) {
        count=0;
        for(j=0;j<length;j++)
        {
            if(i==j){
             continue;
            }
            if(a[i]==a[j])
               count++;
        }
        if(count==0){
            printf("%d ",a[i]);
        }
    }

    return 0;
}