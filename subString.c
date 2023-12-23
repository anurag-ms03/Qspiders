#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void checkSub(char *p, char *q, int len1, int len2)
{
    int i = 0, j, k, flag = 0;
    for (i = 0; i <= len1 - len2; i++)
    {
        k = 0, j = 0;
        while (j < len2)
        {
            if (p[i + j] == q[k])
            {
                j++;
                k++;
            }
            else
                break;
        }
        if (k == len2)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("string 2 is a substring of string 1 ");
    else
        printf("not a substring");
}
int main()
{
    char *str1 = (char *)malloc(100 * sizeof(char));
    char *str2 = (char *)malloc(100 * sizeof(char));
    int len1, len2;
    printf("Enter the string 1 \n");
    scanf("%[^\n]s\n", str1);
    while (getchar() != '\n')
        ;
    printf("Enter the second string \n");
    scanf("%[^\n]s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    checkSub(str1, str2, len1, len2);
}