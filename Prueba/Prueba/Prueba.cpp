#include<conio.h>
#include<windows.h>
#include <time.h>
#include <stdlib.h>
#include<stdio.h>
#include<iostream>
int xt = 22, yt = 40, dire = 0, diref = 0;
int xc = 31, yc = 10;
int tecla;
int contador = 0;
int sal = 1;
int cxn = 7, cyn = 5, cxn2 = 22, cyn2 = 5, cxn3 = 37, cyn3 = 5;
bool verificar1 = false, verificar2 = false, verificar3 = false;
using namespace std;
int nivel = 1;
int velocidad = 0;
int posC = 1;
float tiempo = 0;
int Seg = 0;
int puntuacion;
int vida = 3;
int reciduo;
int estad[10][2];

void gotoxy(int x, int y) {
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwpos;
	dwpos.X = x;
	dwpos.Y = y;
	SetConsoleCursorPosition(hcon, dwpos);
}

void puntaje() {
	if (nivel == 1) { puntuacion = puntuacion + 20; }
	if (nivel == 2) { puntuacion = puntuacion + 40; }
	if (nivel == 3) { puntuacion = puntuacion + 60; }
	if (nivel == 4) { puntuacion = puntuacion + 80; }
	if (nivel == 5) { puntuacion = puntuacion + 100; }
	if (nivel == 6) { puntuacion = puntuacion + 130; }
	if (nivel == 7) { puntuacion = puntuacion + 170; }
	if (nivel == 8) { puntuacion = puntuacion + 200; }
	if (nivel == 9) { puntuacion = puntuacion + 220; }
	if (nivel == 10) { puntuacion = puntuacion + 280; }
}

void speed() {

	if (nivel == 1) {
		velocidad = 100;//100=0.1
		tiempo = tiempo + 0.1;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 2) {
		velocidad = 95;// 95=0.095
		tiempo = tiempo + 0.095;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 3) {
		velocidad = 90;// 90=0.090
		tiempo = tiempo + 0.090;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 4) {
		velocidad = 85;// 85=0.085
		tiempo = tiempo + 0.085;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 5) {
		velocidad = 80;// 80=0.080
		tiempo = tiempo + 0.080;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 6) {
		velocidad = 75;// 75=0.075
		tiempo = tiempo + 0.075;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 7) {
		velocidad = 70;// 70=0.070
		tiempo = tiempo + 0.070;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 8) {
		velocidad = 65;// 65=0.065
		tiempo = tiempo + 0.065;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 9) {
		velocidad = 60;// 60=0.060
		tiempo = tiempo + 0.060;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}
	if (nivel == 10) {
		velocidad = 50;// 60=0.050
		tiempo = tiempo + 0.050;
		if (tiempo >= 1) {
			Seg++;
			tiempo = 0;
			reciduo = Seg % 20;
			if (reciduo == 0) {
				puntaje();
				nivel++;
			}
		}
	}


	Sleep(velocidad);

}

void aceleracion() {
	velocidad = velocidad / 10;
	Seg++;
	reciduo = Seg % 20;
	if (reciduo == 0) {
		puntaje();
		nivel++;
	}
	Sleep(velocidad);
}

void colision() {

	if (yt == cyn && xt == cxn) {
		gotoxy(xt, yt); printf("   ");
		gotoxy(xt, yt + 1); printf("    ");
		gotoxy(xt, yt + 2); printf("   ");

		gotoxy(cxn, cyn);     printf("   ");
		gotoxy(cxn, cyn + 1); printf("   ");
		gotoxy(cxn, cyn + 2); printf("   ");

		gotoxy(xt, yt + 1); printf(" * ");
		Sleep(600);
		gotoxy(xt, yt); printf("  *  ");
		gotoxy(xt, yt + 1); printf("* * *");
		gotoxy(xt, yt + 2); printf("  *  ");
		Sleep(600);
		gotoxy(xt, yt); printf("%c * /", 92);
		gotoxy(xt, yt + 1); printf("* * *");
		gotoxy(xt, yt + 2); printf("/ * %c", 92);
		Sleep(600);
		gotoxy(xt, yt); printf("     ");
		gotoxy(xt, yt + 1); printf("     ");
		gotoxy(xt, yt + 2); printf("     ");
		vida--;
	}
	if (yt == cyn2 && xt == cxn2) {
		gotoxy(xt, yt); printf("   ");
		gotoxy(xt, yt + 1); printf("    ");
		gotoxy(xt, yt + 2); printf("   ");

		gotoxy(cxn, cyn2);     printf("   ");
		gotoxy(cxn, cyn2 + 1); printf("   ");
		gotoxy(cxn, cyn2 + 2); printf("   ");

		gotoxy(xt, yt + 1); printf(" * ");
		Sleep(600);
		gotoxy(xt, yt); printf("  *  ");
		gotoxy(xt, yt + 1); printf("* * *");
		gotoxy(xt, yt + 2); printf("  *  ");
		Sleep(600);
		gotoxy(xt, yt); printf("%c * /", 92);
		gotoxy(xt, yt + 1); printf("* * *");
		gotoxy(xt, yt + 2); printf("/ * %c", 92);
		Sleep(600);
		gotoxy(xt, yt); printf("     ");
		gotoxy(xt, yt + 1); printf("     ");
		gotoxy(xt, yt + 2); printf("     ");
		vida--;
	}

	if (yt == cyn3 && xt == cxn3) {
		gotoxy(xt, yt); printf("   ");
		gotoxy(xt, yt + 1); printf("    ");
		gotoxy(xt, yt + 2); printf("   ");

		gotoxy(cxn, cyn3);     printf("   ");
		gotoxy(cxn, cyn3 + 1); printf("   ");
		gotoxy(cxn, cyn3 + 2); printf("   ");

		gotoxy(xt, yt + 1); printf(" * ");
		Sleep(600);
		gotoxy(xt, yt); printf("  *  ");
		gotoxy(xt, yt + 1); printf("* * *");
		gotoxy(xt, yt + 2); printf("  *  ");
		Sleep(600);
		gotoxy(xt, yt); printf("%c * /", 92);
		gotoxy(xt, yt + 1); printf("* * *");
		gotoxy(xt, yt + 2); printf("/ * %c", 92);
		Sleep(600);
		gotoxy(xt, yt); printf("     ");
		gotoxy(xt, yt + 1); printf("     ");
		gotoxy(xt, yt + 2); printf("     ");
		vida--;
	}

}

void OcultarCursor() {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;

	SetConsoleCursorInfo(hCon, &cci);
}

void pintar() {
	HANDLE C = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(C, 11);
	int v = 2;

	for (int i = 2; i < 45; i++) {
		v++;

		gotoxy(i, 2); printf("%c", 219);
		gotoxy(i, 45); printf("%c", 219);

		if (v < 60) {
			gotoxy(2, v); printf("%c", 219);
			gotoxy(44, v); printf("%c", 219);
		}
	}
	for (int horizotal = 0; horizotal < 18; horizotal++) {
		gotoxy(45 + horizotal, 2); printf("%c", 219);
		gotoxy(45 + horizotal, 45); printf("%c", 219);
	}
	for (int vertical = 0; vertical < 43; vertical++)
	{
		gotoxy(62, 2 + vertical); printf("%c", 219);
	}

	SetConsoleTextAttribute(C, 8);
	gotoxy(15, 8); printf("%c", 219);
	gotoxy(15, 4); printf("%c", 219);
	gotoxy(15, 12); printf("%c", 219);
	gotoxy(15, 16); printf("%c", 219);
	gotoxy(15, 20); printf("%c", 219);
	gotoxy(15, 24); printf("%c", 219);
	gotoxy(15, 28); printf("%c", 219);
	gotoxy(15, 32); printf("%c", 219);
	gotoxy(15, 36); printf("%c", 219);
	gotoxy(15, 40); printf("%c", 219);
	gotoxy(15, 44); printf("%c", 219);

	gotoxy(30, 8); printf("%c", 219);
	gotoxy(30, 4); printf("%c", 219);
	gotoxy(30, 12); printf("%c", 219);
	gotoxy(30, 16); printf("%c", 219);
	gotoxy(30, 20); printf("%c", 219);
	gotoxy(30, 24); printf("%c", 219);
	gotoxy(30, 28); printf("%c", 219);
	gotoxy(30, 32); printf("%c", 219);
	gotoxy(30, 36); printf("%c", 219);
	gotoxy(30, 40); printf("%c", 219);
	gotoxy(30, 44); printf("%c", 219);
}

void mover() {
	HANDLE C = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(C, 4);
	if (_kbhit()) {
		unsigned char tecla = _getch();
		if (tecla == 'a' && xt - 15 > 3) {

			gotoxy(xt, yt); printf("    ");
			gotoxy(xt, yt + 1); printf("    ");
			gotoxy(xt, yt + 2); printf("    ");
			xt = xt - 15;


			gotoxy(xt, yt);     printf(" ^ ");
			gotoxy(xt, yt + 1); printf("o%co", 219);
			gotoxy(xt, yt + 2); printf("o%co", 219);

		}
		else {
			if (tecla == 'd' && xt + 15 < 40) {
				gotoxy(xt, yt); printf("   ");
				gotoxy(xt, yt + 1); printf("    ");
				gotoxy(xt, yt + 2); printf("   ");
				xt = xt + 15;


				gotoxy(xt, yt);     printf(" ^ ");
				gotoxy(xt, yt + 1); printf("o%co", 219);
				gotoxy(xt, yt + 2); printf("o%co", 219);

			}
		}

		if (tecla == 'w') {
			aceleracion();
		}
		else {
			if (tecla == 's') {
				speed();
				speed();
			}

		}

		if (tecla == 'p') {
			_getch();
		}

		if (tecla == 'l') {
			vida = 0;
		}


	}
	else
	{
		speed();
	}




}

void carroEnemigo() {
	HANDLE C = GetStdHandle(STD_OUTPUT_HANDLE);

	int num, c;
	srand(time(NULL));
	num = 1 + rand() % (4 - 1);

	switch (num) {
	case 1:

		gotoxy(cxn, cyn);     printf(" ^ ");
		gotoxy(cxn, cyn + 1); printf("o%co", 219);
		gotoxy(cxn, cyn + 2); printf("o%co", 219);
		verificar1 = true;
		break;
	case 2:
		gotoxy(cxn2, cyn2);     printf(" ^ ");
		gotoxy(cxn2, cyn2 + 1); printf("o%co", 219);
		gotoxy(cxn2, cyn2 + 2); printf("o%co", 219);
		verificar2 = true;
		break;

	case 3:
		gotoxy(cxn3, cyn3);     printf(" ^ ");
		gotoxy(cxn3, cyn3 + 1); printf("o%co", 219);
		gotoxy(cxn3, cyn3 + 2); printf("o%co", 219);
		verificar3 = true;
		break;
	}

	if (cyn < 42 & verificar1) {
		SetConsoleTextAttribute(C, 13);
		gotoxy(cxn, cyn);     printf("   ");
		gotoxy(cxn, cyn + 1); printf("   ", 219);
		gotoxy(cxn, cyn + 2); printf("   ", 219);
		cyn++;
		gotoxy(cxn, cyn);     printf(" ^ ");
		gotoxy(cxn, cyn + 1); printf("o%co", 219);
		gotoxy(cxn, cyn + 2); printf("o%co", 219);

		if (cyn == 42) {
			gotoxy(cxn, cyn);     printf("   ");
			gotoxy(cxn, cyn + 1); printf("   ", 219);
			gotoxy(cxn, cyn + 2); printf("   ", 219);

			cxn = 7; cyn = 5;
			verificar1 = false;
		}

	}

	if (cyn2 < 42 & verificar2) {
		SetConsoleTextAttribute(C, 6);
		gotoxy(cxn2, cyn2);     printf("   ");
		gotoxy(cxn2, cyn2 + 1); printf("   ", 219);
		gotoxy(cxn2, cyn2 + 2); printf("   ", 219);
		cyn2++;
		gotoxy(cxn2, cyn2);     printf(" ^ ");
		gotoxy(cxn2, cyn2 + 1); printf("o%co", 219);
		gotoxy(cxn2, cyn2 + 2); printf("o%co", 219);

		if (cyn2 == 42) {
			gotoxy(cxn2, cyn2);     printf("   ");
			gotoxy(cxn2, cyn2 + 1); printf("   ", 219);
			gotoxy(cxn2, cyn2 + 2); printf("   ", 219);

			cxn2 = 22; cyn2 = 5;
			verificar2 = false;
		}

	}

	if (cyn3 < 42 & verificar3) {
		SetConsoleTextAttribute(C, 3);
		gotoxy(cxn3, cyn3);     printf("   ");
		gotoxy(cxn3, cyn3 + 1); printf("   ", 219);
		gotoxy(cxn3, cyn3 + 2); printf("   ", 219);
		cyn3++;
		gotoxy(cxn3, cyn3);     printf(" ^ ");
		gotoxy(cxn3, cyn3 + 1); printf("o%co", 219);
		gotoxy(cxn3, cyn3 + 2); printf("o%co", 219);

		if (cyn3 == 42) {
			gotoxy(cxn3, cyn3);     printf("   ");
			gotoxy(cxn3, cyn3 + 1); printf("   ", 219);
			gotoxy(cxn3, cyn3 + 2); printf("   ", 219);
			cxn3 = 37; cyn3 = 5;
			verificar3 = false;
		}
	}



}

void inicio() {

	HANDLE C = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(C, 15);
	for (int horizotal = 0; horizotal < 30; horizotal++) {
		gotoxy(25 + horizotal, 8); printf("%c", 219);
		gotoxy(25 + horizotal, 16); printf("%c", 219);
	}
	for (int vertical = 0; vertical < 8; vertical++)
	{
		gotoxy(25, 8 + vertical); printf("%c", 219);
		gotoxy(54, 8 + vertical); printf("%c", 219);
	}
	gotoxy(28, 6); printf(" BRICK GAME: RACING");

	gotoxy(33, 10); printf(" INICIAR");
	gotoxy(33, 12); printf(" Estadistica");
	gotoxy(33, 14); printf(" SALIR");
	gotoxy(xc, yc); printf(">");
	sal = 1;

	do {
		tecla = _getch();
		if (tecla == 'w' & yc - 2 >= 9) {
			gotoxy(xc, yc); printf(" ");
			yc = yc - 2;
			posC--;
			gotoxy(xc, yc); printf(">");
		}
		else {
			if (tecla == 's' & yc + 2 <= 15) {
				gotoxy(xc, yc); printf(" ");
				yc = yc + 2;
				gotoxy(xc, yc); printf(">");
				posC++;
			}
		}
		if (tecla == ' ') {


			sal = 5;


		}
	} while (sal == 1);
	system("cls");
}

void divut() {
	HANDLE C = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(C, 4);

	gotoxy(xt, yt); printf(" ^ ");
	gotoxy(xt, yt + 1); printf("o%co", 219);
	gotoxy(xt, yt + 2); printf("o%co", 219);

}

void RellenarStats() {
	for (int i = 0; i < 10; i++) {

		estad[i][0] = i + 1;
		estad[i][1] = 0;
	}
}

bool AgregarStats(int puntuacion) {
	for (int i = 0; i < 10; i++) {

		if (estad[i][1] == 0) {
			estad[i][1] = puntuacion;
			return true;
		}
	}
	return false;
}

void ordenarStats() {
	int mayor = 0;
	for (int i = 0; i < 10; i++) {
		if (estad[i][1] < estad[i + 1][1]) {
			mayor = estad[i + 1][1];
			estad[i + 1][1] = estad[i][1];
			estad[i][1] = mayor;
		}
	}
}

void ImprimirStats() {
	HANDLE C = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(C, 10);
	int v = 2;

	for (int i = 2; i < 45; i++) {
		v++;

		gotoxy(i, 2); printf("%c", 219);
		gotoxy(i, 45); printf("%c", 219);

		if (v < 60) {
			gotoxy(2, v); printf("%c", 219);
			gotoxy(44, v); printf("%c", 219);
		}
	}
	for (int horizotal = 0; horizotal < 30; horizotal++) {
		gotoxy(8 + horizotal, 13); printf("%c", 219);
		gotoxy(8 + horizotal, 30); printf("%c", 219);
	}
	for (int vertical = 0; vertical < 18; vertical++)
	{
		gotoxy(8, 13 + vertical); printf("%c", 219);
		gotoxy(38, 13 + vertical); printf("%c", 219);
	}
	gotoxy(14, 16); printf("Lugar");
	gotoxy(26, 16); printf("Puntaje");
	for (int i = 0; i < 10; i++) {
		gotoxy(15, 18 + i); printf("%d \t  %d \n", estad[i][0], estad[i][1]);
	}
}

void marcacion() {
	HANDLE C = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(C, 15);
	gotoxy(46, 5); printf("Vidas");
	gotoxy(46, 6); printf("3/%02i", vida);
	gotoxy(46, 8); printf("Velovidad");
	gotoxy(46, 9); printf("%02i   ", velocidad);
	gotoxy(46, 11); printf("NIVEL");
	gotoxy(46, 12); printf("%02i", nivel);
	gotoxy(46, 14); printf("PUNTUACION");
	gotoxy(46, 15); printf("%02i", puntuacion);
	gotoxy(46, 17); printf("TIEMPO");
	gotoxy(46, 18); printf("%02i", Seg);
	gotoxy(46, 21); printf("L = Salir");
	gotoxy(46, 22); printf("P = Pausa");

}



int main(int argc, char* argv[])
{
	RellenarStats();
	OcultarCursor();
	while (sal != 6)
	{
		system("cls");
		inicio();
		switch (posC)
		{
		case 1:
			pintar();
			divut();

			while (vida > 0)
			{
				marcacion();
				carroEnemigo();
				mover();
				colision();

			}
			AgregarStats(puntuacion);
			vida = 3;
			puntuacion = 0;
			nivel = 1;
			Seg = 0;
			tiempo = 0;

			break;

		case 2:
			while (sal != 1) {
				ordenarStats();
				ImprimirStats();

				if (_kbhit()) {
					unsigned char tecla = _getch();
					if (tecla == ' ') {
						sal = 1;
					}
				}
			}
			break;

		case 3:
			sal = 6;
			break;
		}





	}

}
