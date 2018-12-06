#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, espE, espI, i, j;
    char Perimetre,surface;
    char repet;

    int TEMPO;


    do
    {
        do
        {
            printf("\n\n\tdonner la base (only impair > 1)  :  ");
            scanf("%d",&base);
            system("cls");
            if(base % 2 == 0 || base <= 1)
            {
                printf("\n\n\trah golna lik impaire > 1\n");
            }

            else
            {
                printf("\n\n\tdonner le symbole du perimetre et de la surface pour dessiner  :\n");
                printf("\n\n\tPerimetre  :  ");
                Perimetre = getch();
                putch(Perimetre);
                getch();
                printf("\n\n\tSurface  :  ");
                surface = getch();
                putch(surface);
                getch();
            }

        }while(base % 2 == 0 || base <= 1);

        system("cls");
        espI = -1;
        espE = base/2;

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        for(i = 1; i <= base; i++)
        {
            printf("\t\t\t\t\t\t");
            for(j = 1; j <= espE; j++)
            {
                printf("  ");
            }

            printf("%c ",Perimetre);

            for(j = 1; j <= espI; j++)
            {
                printf("%c ",surface);
            }

            if(i > 1 && i < base)
                printf("%c ",Perimetre);

            if(i == base/2)
            {
                espI = base - 4;
                espE = 1;
            }

            if(i > base/2)
            {
                espE++;
                espI = espI - 2;
            }

            else
            {
                espE--;
                espI = espI + 2;
            }

            for(TEMPO = 0; TEMPO <= 50000000 ; TEMPO++)
                ;
            printf("\n");
        }


        system("pause");
        system("cls");
        printf("\n\n\tPour repeter taper 1\t:\t");
        repet = getch();
        putch(repet);
        getch();
        system("cls");
    }while(repet == '1');

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}
