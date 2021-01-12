#include <stdio.h>

int main()
{
    char alph[27];
    int x;
    char *ptr;
    ptr = alph;     
    for(x=0;x<26;x++)
    {
        *ptr=x+'A';
        ptr++;
    }
    ptr = alph;
    for(x=0;x<26;x++)
    {
       printf("%c ", *ptr);
        ptr++;
    }
    printf("\n\n");
    return(0);
}
