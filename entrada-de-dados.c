#include <stdio.h>
int main(void)
{
    int a, b;
    char c;
    
    printf("Digite um numero: ");
      scanf("%d", &a);
    printf("Digite um caracter: ");
      scanf(" %c", &c);
    printf("Digite um numero: ");
      scanf("%d", &b);
      
    printf("a=%d e b=%d", a,b);
    return 0;
}