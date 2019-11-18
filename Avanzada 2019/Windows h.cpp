/* 
Impresion de caracteres a traves de bucles for y funciones de la libreria windows.h

*/
#include<iostream>
#include<windows.h> 
   
using namespace std;

void gotoxy(int x, int y){			// posiciona al cursor
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);	
}
void ocultarCursor(){		// oculta elemento poco estetico
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;	
	SetConsoleCursorInfo(hCon, &cci);
}

void imprimir(){		// imprime caracter
	cout<<(char)219;	
}
int main(){
	ocultarCursor();	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
		gotoxy(i,j);
		imprimir();
		Sleep(20);
		}
	}
	
	for(int i = 6; i < 11; i++){
		for(int j = 6; j < 11; j++){
			gotoxy(i,j);
			imprimir();
			Sleep(20);
			
		}
	}
	
	
	
	  
}
