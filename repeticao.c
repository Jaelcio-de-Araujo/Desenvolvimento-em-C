#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Definição de função para aceitação de acentos.
int main(void){
setlocale(LC_ALL,"");

char resp;
int qtdProdutos = 0, i=0, qtdProduto = 0, clientes = 0;
float valor = 0, compra, pago, faturamento = 0;

printf("Chegou Cliente (s / n): ");
scanf("%c", &resp);

while(resp =='s')
{
    printf("Quantos do tipo produtos: ");
    scanf("%d", &qtdProdutos);
    compra = 0;
   for(i = 1; i<=qtdProdutos; i++){
    printf("Quantos do produtos %d ", i);
    scanf("%d", &qtdProduto);
    printf("Valor do produto %d ", i);
    scanf("%f", &valor);
    compra += qtdProduto * valor;
}

printf("\n\nTotal da compra: R$ %.2f",compra);  
printf("\nDigite o valor pago: ");
scanf("%f", &pago);

printf("Troco = R$ %.2f", pago - compra); 

faturamento += compra;
clientes++;

printf("\n\nNovo Cliente (S / N): ");
fflush(stdin);
scanf("%c", &resp);
}
printf("\n\nFaturamento: R$ %.2f", faturamento);
printf("\nTotal de clientes: %d", clientes);
printf("\n\\nnMedia de compras: R$ %.2f", faturamento/clientes);

return 0;
}