#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int espace,i;
    int N,Ncopy;
    char symboleExterne,symboleInterne;

    N = 5;
    Ncopy = N;
    espace = 1;

    printf("\n\nDonner le symbole Externe du dessin\t:\t");
    //scanf("%c",&symboleExterne);
    symboleExterne = getch();
    putch(symboleExterne);
    printf("\n\nDonner le symbole Interne du dessin\t:\t");
    //scanf("%c",&symboleInterne);
    symboleInterne = getch();
    putch(symboleInterne);
    //getch();

    printf("\n\n\n");

    // ---------  Phase 1 ----------------
    do
    {
        for(i = 0; i < Ncopy; i++)
        {
            printf("%c ",symboleExterne);
        }

        for(i = 0; i < espace; i++)
        {
            printf("%c ",symboleInterne);
        }

        for(i = 0; i < Ncopy; i++)
        {
            printf("%c ",symboleExterne);
        }

        printf("\n");
        Ncopy--;
        espace = espace + 2;

    }while(Ncopy > 0);

    // ---------  Phase 1 ----------------

    do
    {
        for(i = 0; i < Ncopy; i++)
        {
            printf("%c ",symboleExterne);
        }

        for(i = 0; i < espace; i++)
        {
            printf("%c ",symboleInterne);
        }

        for(i = 0; i < Ncopy; i++)
        {
            printf("%c ",symboleExterne);
        }

        printf("\n");
        Ncopy++;
        espace = espace - 2;
    }while(Ncopy <= N);

    printf("\n\n\n");

    return 0;
}
