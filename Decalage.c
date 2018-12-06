#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Decalage(char c[])
{
    int i;

    while(1)
    {
        char tmp = c[0];
        for(i=1; c[i]!='\0'; i++)
        {
            c[i-1] = c[i];
        }
        i--;
        c[i] = tmp;
        printf("%s", c);
        Sleep(400);
        system("cls");
    }
}


int main()
{

    char c[100];
    printf("Taper une chaine : ");
    scanf("%[^\n]s", c);
    Decalage(c);

    return 0;
}

