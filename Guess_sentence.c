#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void about_to()
{
    int i,j;
    int dots = 1;

    system("cls");
    for(i=3;i>0;i--)
    {
        printf("in %d\n",i);
        for(j=1;j<=dots;j++)
        {
            printf(".");
            Sleep(10);
        }
        Sleep(1000);
        dots++;
        system("cls");
    }
}

void dead_man()
{

    int i = 1;
    while(1)
    {
        printf("You are a dead man !!!!!\n");
        printf("___________");
        printf("\n|\t |");
        if(i==1)
        {
            printf("\n|\t O");
            printf("\n|\t/|\\");
            printf("\n|\t/ \\");
        }
        else
        {
            printf("\n|\t_O_");
            printf("\n|\t_|_");
            printf("\n|");
        }
        printf("\n|");
        i = i*-1;
        Sleep(100);
        system("cls");
    }
}

void winner()
{

    int i = 1;
    while(1)
    {
        printf("You are a ==== WINNER ==== !!!!!\n");
        printf("\n");
        if(i==1)
        {
            printf("\n\t_O_");
            printf("\n\t |");
            printf("\n\t/ \\");
        }
        else
        {
            printf("\n\t\\O/");
            printf("\n\t_|_");
            printf("\n");
        }
        printf("\n");
        i = i*-1;
        Sleep(100);
        system("cls");
    }
}

int compare_chaine(char c1[], char c2[])
{
    int i, valide;
    i=0; valide = 1;
    while(c1[i] != '\0')
    {
        if(c1[i] != c2[i])
            valide = -1;
        i++;
    }
    return valide;

}

void make_stars(char chaine[], char _stars[])
{
    int i=0;
    while(chaine[i] != '\0')
    {
        _stars[i] = '*';
        i++;
    }
    _stars[i] = '\0';
}

void Deviner_mot(char chaine[], int essai)
{
    char _stars[100];
    char lettre;
    int i, j;
    j = 1;


    make_stars(chaine, _stars);

    int result = compare_chaine(chaine, _stars);

    while(result != 1 && j <= essai)
    {
        getchar();
        printf("\nEssai %d - taper une lettre : ", j);
        scanf("%c", &lettre);
        i = 0;
        while(chaine[i] != '\0')
        {
            if(chaine[i] == lettre)
                _stars[i] = lettre;
            i++;
        }

        printf("\n%s\n", _stars);
        result = compare_chaine(chaine, _stars);
        j++;
    }

    about_to();

    if(result == 1)
        winner();
    else
        dead_man();
}

int main()
{
    char chaine[100];
    int essai;
    printf("taper votre chaine : ");
    scanf("%[^\n]s", chaine);
    system("cls");
    printf("taper le nombre d'essai : ");
    scanf("%d", &essai);
    Deviner_mot(chaine, essai);

    printf("\n");
    return 0;
}

