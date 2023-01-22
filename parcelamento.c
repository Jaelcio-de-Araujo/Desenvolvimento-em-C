#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
int vCompra, pParcelas, parcela, i, resto;
    scanf("%d", &vCompra);
    scanf("%d", &pParcelas);

    parcela = vCompra / pParcelas;
    resto = vCompra % pParcelas;

    for (i = 1; i <= resto; i++)
    {
        printf("%d\n", parcela + 1);
    }

    for (; i <= pParcelas; i++)
    {
        printf("%d\n", parcela);
    }
    return 0;
}