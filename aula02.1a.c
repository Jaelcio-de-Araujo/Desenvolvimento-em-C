#include <stdio.h>
#include "conio.h"

int main(void) {
    // CORES DE FONTE
	textbackground(7);
	textcolor(0); printf("\n Preto.......... BLACK........ 0\n");
	textbackground(0);
	textcolor(1); printf(" Azul........... BLUE......... 1\n");
	textcolor(2); printf(" Verde.......... GREEN........ 2\n");
	textcolor(3); printf(" Cian........... CYAN......... 3\n");
	textcolor(4); printf(" Vermelho....... RED.......... 4\n");
	textcolor(5); printf(" Magenta........ MAGENTA...... 5\n");
	textcolor(6); printf(" Marrom......... BROWN........ 6\n");
	textcolor(7); printf(" Cinza Claro.... LIGHTGRAY.... 7\n");
	textcolor(8); printf(" Cinza Escuro... DARKGRAY..... 8\n");
	textcolor(9); printf(" Azul Claro..... LIGHTBLUE.... 9\n");
	textcolor(10); printf(" Verde Claro.... LIGHTGREEN... 10\n");
	textcolor(11); printf(" Cian Claro..... LIGHTCYAN.... 11\n");
	textcolor(12); printf(" Vermelho Claro. LIGHTRED..... 12\n");
	textcolor(13); printf(" Magenta Claro.. LIGHTMAGENTA. 13\n");
	textcolor(14); printf(" Amarelo........ YELLOW....... 14\n");
	textcolor(15); printf(" Branco......... WHITE........ 15\n");
	getchar();
	
    // CORES DE FUNDO
	clrscr();
	textcolor(7);
	textbackground(0); printf("\n Preto.......... BLACK........ 0 \n");
	textbackground(1); printf(" Azul........... BLUE......... 1 \n");
	textbackground(2); printf(" Verde.......... GREEN........ 2 \n");
	textbackground(3); printf(" Cian........... CYAN......... 3 \n");
	textbackground(4); printf(" Vermelho....... RED.......... 4 \n");
	textbackground(5); printf(" Magenta........ MAGENTA...... 5 \n");
	textbackground(6); printf(" Marrom......... BROWN........ 6 \n");
	textcolor(0);
	textbackground(7); printf(" Cinza Claro.... LIGHTGRAY.... 7 \n");
	textcolor(7);
	textbackground(8); printf(" Cinza Escuro... DARKGRAY..... 8 \n");
	textbackground(9); printf(" Azul Claro..... LIGHTBLUE.... 9 \n");
	textbackground(10); printf(" Verde Claro.... LIGHTGREEN... 10\n");
	textbackground(11); printf(" Cian Claro..... LIGHTCYAN.... 11\n");
	textbackground(12); printf(" Vermelho Claro. LIGHTRED..... 12\n");
	textbackground(13); printf(" Magenta Claro.. LIGHTMAGENTA. 13\n");
	textbackground(14); printf(" Amarelo........ YELLOW....... 14\n");
	textbackground(15); printf(" Branco......... WHITE........ 15\n");
	getchar();
    
    // CURSOR
	textcolor(7);
	textbackground(0);
	clrscr();
    _setcursortype(0);
	gotoxy(10,10); printf("Cursor = ");
	getchar();
	clrscr();
    _setcursortype(1);
	gotoxy(11,11); printf("Cursor = ");
	getchar();
	clrscr();
    _setcursortype(2);
	gotoxy(12,12); printf("Cursor = ");
	getchar();
    
    return 0;
}
