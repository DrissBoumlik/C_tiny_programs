#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,esp;

    for(i = 1; i <= 20; i++)
    {
        for(j = 20; j >= i; j--)
            printf("* ");

        esp = (i-1)*4;

        for(j = 1; j <= esp ; j++)
            printf(" ");
        for(j = 20; j >= i; j--)
            printf(" *");
        printf("\n");
    }

    printf("\n");

    for(i = 1; i <= 20; i++)
    {
        for(j = 1; j <= i; j++)
            printf("* ");

        esp = (20-i)*4;

        for(j = 1; j <= esp ; j++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf(" *");
        printf("\n");
    }
    return 0;
}
