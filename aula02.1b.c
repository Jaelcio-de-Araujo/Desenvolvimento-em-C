#include <stdio.h>
#include <conio.h>

int main(void) {
    int i;

    // DESENHAR UM QUADRADO DE CANTO SIMPLES
    _setcursortype(0);
	textcolor(12);
	textbackground(7);
	clrscr();
    // Desenha as linhas horizontais do quadrado
    for (i=36;i<45;i++) {
        gotoxy(i,10);printf("%c", 196);
        gotoxy(i,16);printf("%c", 196);
    }
    // Desenha as linhas verticais do quadrado
    for (i=11;i<16;i++) {
        gotoxy(35,i);printf("%c", 179);
        gotoxy(45,i);printf("%c", 179);
    }
    // Desenha os quanto cantos do quadrado
    gotoxy(35,10);printf("%c", 218);
    gotoxy(45,10);printf("%c", 191);
    gotoxy(35,16);printf("%c", 192);
    gotoxy(45,16);printf("%c", 217);
    textcolor(1);
    gotoxy(39,13);printf("Oi!!");
    getchar();

    // DESENHAR UM QUADRADO DE CANTO DUPLO
	textcolor(14);
	textbackground(1);
	clrscr();
    // Desenha as linhas horizontais do quadrado
    for (i=35;i<46;i++) {
        gotoxy(i,9);printf("%c", 205);
        gotoxy(i,17);printf("%c", 205);
    }
    // Desenha as linhas verticais do quadrado
    for (i=10;i<17;i++) {
        gotoxy(34,i);printf("%c", 186);
        gotoxy(46,i);printf("%c", 186);
    }
    // Desenha os quanto cantos do quadrado
    gotoxy(34,9);printf("%c", 201);
    gotoxy(46,9);printf("%c", 187);
    gotoxy(34,17);printf("%c", 200);
    gotoxy(46,17);printf("%c", 188);
	textcolor(11);
    gotoxy(39,13);printf("Oi!!");
    getchar();

    return 0;
}
