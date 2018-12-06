#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define dim 3

void AfficheGrid(char tic[][dim])
{
    int i,j;
    printf("\n\n");
    for(j=0;j<3;j++)
    {
        for(i=1;i<=13;i++)
            printf("-");
        printf("\n");
        for(i=0;i<3;i++)
            printf("| %c ",tic[j][i]);
        printf("|\n");
    }
    for(i=1;i<=13;i++)
        printf("-");
    printf("\n");
}
void AfficheGridNumber()
{
    int i,j;
    //char number = '1';
    printf("\n\n");
    for(j=0;j<dim;j++)
    {
        for(i=1;i<=13;i++)
            printf("-");
        printf("\n");
        for(i=0;i<dim;i++)
        {
            printf("|%d,%d",j,i);

        }
        printf("|\n");
    }
    for(i=1;i<=13;i++)
        printf("-");
    printf("\n");
}
int main()
{
    char tic[dim][dim] = {{' ',' ',' '},
                      {' ',' ',' '},
                      {' ',' ',' '}};
    char j1, j2;
    int l,c, done;
    j1 = 'x'; j2 = 'o';
    int tour = 1, gagne = 1;
    do
    {
        printf("\n\ntour %d pour %c",tour,tour%2==0 ? j2 : j1);
        AfficheGridNumber();
        system("pause");
        system("cls");
        do
        {
            printf("\ntaper la position  : ");
            scanf("%d,%d",&l,&c);
            done = 0;
            if(tic[l][c] == ' ')
            {
                tic[l][c] = tour%2 == 0 ? j2 : j1;
                done = 1;
            }
        }while(done != 1);

        //test si l'un des 2 joueurs � gagn�
        if(tour >= 5)
        {
            int i;
            for(i=0;i<dim;i++)
                if(tic[l][c]!=tic[l][i])
                    gagne = -1;
            if(gagne != 1)
            {
                gagne = 1;
                for(i=0;i<dim;i++)
                    if(tic[l][c]!=tic[i][c])
                        gagne = -1;
                if(gagne != 1)
                {
                    gagne = 1;
                    if(l==1 && c==1)
                    {
                        for(i=0;i<dim;i++)
                            if(tic[l][c]!=tic[i][i])
                                gagne = -1;
                        if(gagne != 1)
                        {
                            gagne = 1;
                            for(i=dim-1;i>=0;i++)
                                if(tic[l][c]!=tic[i][dim-1-i])
                                    gagne = -1;
                        }
                        if(gagne == 1)
                            break;
                    }
                    gagne = 1;
                    if((l==0 || l==dim-1) && (c==0 || c==dim-1))
                    {
                        if(l==0 && c==0)
                            for(i=l;i<dim;i++)
                                if(tic[l][c]!=tic[i][i])
                                    gagne = -1;
                        if(l==0 && c==dim-1)
                            for(i=l;i<dim;i++)
                                if(tic[l][c]!=tic[i][c-i])
                                    gagne = -1;
                        if(l==dim-1 && c==dim-1)
                            for(i=dim-1;i>=0;i--)
                                if(tic[l][c]!=tic[i][i])
                                    gagne = -1;
                        if(l==dim-1 && c==0)
                            for(i=c;i<dim;i++)
                                if(tic[l][c]!=tic[l-i][i])
                                    gagne = -1;
                    }
                }

            }
            if(gagne == 1)
            {
                printf("le %c a gagne",tic[l][c]);
                break;
            }
        }
        AfficheGrid(tic);
        tour++;
    }while(tour<=9);


    return 0;
}
