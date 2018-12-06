#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i = 1; i<= 10;i++)
    {

        for(j = 1; j<= 20;j++)
        {
            if(i >= 2 && i <= 9 && j >=2 && j <= 19 )
                printf("  ");
            else
                printf("* ");

        }
        printf("\n");
    }

    return 0;
}
