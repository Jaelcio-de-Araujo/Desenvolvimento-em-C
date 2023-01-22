#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char str1[10], str2[10];

    printf("Digite um valor: ");

    gets(str1);
    puts(str1);
    printf("%s", str1);
    printf(" --> %d", strlen(str1));
}