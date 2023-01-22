#include <stdio.h>

int main(void){
    int l, c, m[4][4];

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            printf("Digite o valor da linha %d e coluna %d: ", l+1, c+1);
            scanf("%d", &m[l][c]);
        }
    }
    for (l=0; l<4; l++){
        for(c=0; c<4; c++){
            printf("%d ", m[l][c]);
        }
        printf("\n");
}
    return 0;
}