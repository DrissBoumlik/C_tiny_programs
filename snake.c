#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int espace,step,chemin, longueur,etage,sautLigne;
    int copyLongueur,copyChemin,copyEtage;
    int j,k;
    int i; // Compteur d'etoile et Espacements
    int Repet,Tour = 1;
    char choix;

            // ----------------------------- Initialisation -------------------------------

            longueur = 5;
            chemin = 10;
            etage = 10;

    printf("\n\n\n\n\tPour commencer 1 seul tour : Voila\n\n\n\t");
    system("pause");
    system("cls");

    do
    {
        Repet = 0;
        while(Repet < Tour)
        {

            copyEtage = 1;
            copyChemin = chemin;

            copyLongueur = longueur;

            // ----------------------------- ALLER ------------------------------

            espace = 0;
            for(step = 0; step <= copyChemin ; step++)
            {
                for(i = 1; i <= espace; i++)
                {
                    printf("  ");
                }

                for(i = 1; i <= copyLongueur; i++)
                    printf("* ");
                espace++;
                system("cls");
            }

            // --------------------------- ALLER / DESCENDRE ------------------------------
            j = 1;

            while(copyEtage < longueur - 1)
            {
                    copyLongueur--;
                    espace = copyChemin + j;
                    for(i = 1; i <= espace; i++)
                    {
                        printf("  ");
                    }
                    for(i = 1; i <= copyLongueur; i++)  //le reste du snake
                        printf("* ");

                printf("\n");

                espace = copyChemin + (longueur - 1);
                for(k = 0;k < copyEtage; k++)
                {
                    for(i = 1; i <= espace; i++)
                    {
                        printf("  ");
                    }
                    printf("* ");
                    printf("\n");
                }
                copyEtage++;
                j++;
                system("cls");
            }

            // --------------------------- DESCENDRE ------------------------------

            copyEtage = 0;
            sautLigne = 0;
            while(copyEtage < etage)
            {
                espace = copyChemin + (longueur - 1);

                for(j = 0; j < sautLigne; j++)
                    printf("\n");

                for(j = 0;j < longueur; j++)
                {
                    for(i = 1; i <= espace; i++)
                        printf("  ");

                    printf("* ");
                    printf("\n");
                }
                sautLigne++;
                copyEtage++;
                system("cls");
            }



            // --------------------------- DESCENDRE / RETOUR ------------------------------

            j = 1;
            copyLongueur = 2;
            copyEtage = longueur - 2;


            while(copyEtage > 0)
            {
                espace = copyChemin + (longueur - 1);
                for(k = 1; k < (etage + j); k++)
                    printf("\n");

                for(k = 1; k <= copyEtage; k++)
                {
                    for(i = 1; i <= espace; i++)
                        printf("  ");

                    printf("* ");
                    printf("\n");

                }
                espace = copyChemin + copyEtage;
                for(i = 1; i <= espace; i++)
                        printf("  ");
                for(i = 1; i <= copyLongueur; i++)  //le reste du snake
                    printf("* ");

                copyEtage--;
                copyLongueur++;
                j++;
                system("cls");
            }


            // --------------------------- RETOUR ------------------------------

            copyEtage = etage + longueur - 2;
            copyChemin = chemin;
            espace = chemin;
            for(step = 0; step <= copyChemin ; step++)
            {
                for(i = 1;i <= copyEtage; i++)
                    printf("\n");
                for(i = espace; i >= 1; i--)
                {
                    printf("  ");
                }

                for(i = 1; i <= longueur ;i++)
                    printf("* ");
                espace--;
                system("cls");
            }

            // --------------------------- RETOUR / MONTER------------------------------

            j = 1;
            copyEtage = etage + longueur - j;
            copyLongueur = longueur - 1;

            while(copyLongueur > 0)
            {
                for(i = 2;i < copyEtage; i++)
                    printf("\n");

                for(k = 1; k <= j; k++)
                {
                    printf("*");
                    printf("\n");
                }
                for(i = 1;i <= copyLongueur;i++)
                    printf("* ");

                copyLongueur--;
                copyEtage--;
                j++;
                system("cls");
            }

            // --------------------------- MONTER ------------------------------

            copyLongueur = longueur;
            copyEtage = etage;

            while(copyEtage > 0)
            {
                for(i = 1; i < copyEtage; i++)
                printf("\n");

                for(i = 1; i <= copyLongueur; i++)
                    printf("*\n");

                copyEtage--;
                system("cls");
            }



            // --------------------------- MONTER / ALLER ------------------------------

            if(Repet != Tour - 1)
            {
                j = 2;
                copyLongueur = longueur - j;
                copyEtage = etage - 1;
                while(j <= longueur)
                {
                    for(i = 1; i <= j; i++)
                    printf("* ");
                    for(k = 1; k <= copyLongueur; k++)
                        printf("\n*");
                    copyLongueur--;
                    copyEtage--;
                    j++;
                    system("cls");
                }
            }

            // --------------------------- MONTER / FIN ------------------------------

            else
            {
                copyLongueur = longueur - 1;
                while(copyLongueur >= 0)
                {
                    for(i = 1; i <= copyLongueur; i++)
                        printf("*\n");

                    copyLongueur--;
                    system("cls");
                }
            }
            Repet++;
        }

        if(Repet >= Tour)
        {

            printf("\n\n\n\n\tPour quitter taper '0'\t:\t");
            Tour = getch();
            putch(Tour);
            getch();

            if(Tour != '0')
            {
                printf("\n\n\n\n\tVoules-vous changer la longueur, chemin ou etage  ? Oui/Non\t:\t");
                choix = getch();
                putch(choix);
                getch();
                system("cls");

                if(choix == 'O' || choix == 'o')
                {
                    printf("\n\n\n\n\tDonner la longueur du serpent, Chemin et Etage  :\n\n");
                    printf("\n\tLongueur\t:\t");
                    scanf("%d",&longueur);
                    printf("\n\tChemin\t:\t");
                    scanf("%d",&chemin);
                    printf("\n\tEtage\t:\t");
                    scanf("%d",&etage);
                    system("cls");
                }

                printf("\n\n\n\n\tTaper un nombre (positif) de tour\t:\t");
                scanf("%d",&Tour);
                system("cls");
                while(Tour < 0)
                {
                    printf("\n\n\n\n\tJ'ai bien dis un nombre > 0 de tour ou 0 pour quitter\t:\t");
                    scanf("%d",&Tour);
                    system("cls");
                }
            }
            else
                break;

        }



    }while(Tour != 0);
    printf("\n\n\n");

    return 0;
}
