#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nRodadas, dDario, xXerxes;
    int i, dario = 0, xerxes = 0;

    scanf("%d", &nRodadas);
    for (i = 0; i < nRodadas; i++)
    {
        scanf("%d %d", &dDario, &xXerxes);
        if (((dDario + 1) % 5 == xXerxes) || ((dDario + 2) % 5 == xXerxes))
            dario++;
        else
            xerxes++;
    }
    if (dario > xerxes)
        printf("\n\nDario");
    else
        printf("\n\nXerxes");
    system("pause");
    return 0;
}