#include<iostream>
#include<windows.h> 
#include<conio.h>
#define ARRIBA 72
#define ABAJO 80
#define IZQUERDA 75	
#define DERECHA 77


using namespace std;
void gotoxy(int x, int y){			// posiciona al cursor en las coordenadas (x,y) del CLI
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);	
}
void ocultarCursor(){
		
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;	
	SetConsoleCursorInfo(hCon, &cci);
}
void pintarLimites(){
	for(int i = 3; i < 78; i++){
		if(i == 3){
			gotoxy(i,3);
			cout<<(char)201;
			gotoxy(i,25);
			cout<<(char)200;
		}else if(i == 77){
			gotoxy(i,3);
			cout<<(char)187;
			gotoxy(i,25);
			cout<<(char)188;		
		}else{
			gotoxy(i,3);
			cout<<(char)205;
			gotoxy(i,25);
			cout<<(char)205;
		}
	}
	for(int i = 4; i < 25; i++){
		gotoxy(3,i);
		cout<<(char)186;
		gotoxy(77,i);
		cout<<(char)186;
	}
}
class Serpiente{
	private:
		int x, y;
		char tamanho[];
	public:
		Serpiente(int x, int y){
			this->x = x;
			this->y = y;
		}	
		void imprimirInicio(){
			
		}
		void agrandar(){
		
		}
		void comer(){
		
		}
		
};
class Comida{
	private:
	
	public:
		

};
int main(){
	ocultarCursor();	
	pintarLimites();	
	getch();
	return 0;
}


