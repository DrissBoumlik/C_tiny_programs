#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void Min_to_maj(char c[])
{
    int i;
    for(i=0; c[i]!='\0'; i++)
    {
        if(c[i] != ' ')
            c[i] = c[i] - 32;
    }
}

int main()
{
    char c[] = "the quick brown fox jumps over the lazy dog";
    Min_to_maj(c);
    printf("%s",c);

    return 0;
}

