#include <stdio.h>
#include <stdlib.h>
int rev_word(char *q)
{
    int z = *q ==' ' ?0:*q =='\0'?0:rev_word(q + 1) + 1;
    if (z)
        putchar(*q);
    return z;
}
int main()
{
    char *p = (char *)malloc(100 * sizeof(char));
    int a;
    printf("Enter string \n");
    scanf("%[^\n]s", p);
    while (*p && p)
    {
        a = rev_word(p);
        p = p + a;
        if (*p == ' ')
        {
            putchar(' ');
            p++;
        }
    }
    return 0;
}