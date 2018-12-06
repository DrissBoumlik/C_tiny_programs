#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmbr = 2,div,sommeDiv,comptP = 0,brn;

    brn = 9000;
    do
    {
        sommeDiv = 1;

        for ( div = 2; div <= nmbr / 2; div++ )
        {
            if ( ( nmbr % div ) == 0 ) // si oui alors div est un diviseur de nmbr
                sommeDiv += div;
        }

        if ( nmbr == sommeDiv )
        {
            printf("\n\n%d est parfait",nmbr );
            comptP++;
        }
        nmbr++;

    }while ( nmbr < brn);

    printf("\n\nIl existe %d nombres parfaits jusqu'a %d",comptP,brn);

    printf("\n\n\n");
    return 0;
}
