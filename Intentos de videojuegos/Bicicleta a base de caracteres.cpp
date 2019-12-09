#include<iostream>
#include<windows.h> 
#include<conio.h>
#define ARRIBA 72
#define ABAJO 80
#define IZQUERDA 75	
#define DERECHA 77

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
void pintarLimites(){
	for(int i = 3; i < 78; i++){
		if(i == 3){
			gotoxy(i,3);
			cout<<(char)201;
			gotoxy(i,20);
			cout<<(char)200;
		}else if(i == 77){
			gotoxy(i,3);
			cout<<(char)187;
			gotoxy(i,20);
			cout<<(char)188;		
		}else{
			gotoxy(i,3);
			cout<<(char)205;
			gotoxy(i,20);
			cout<<(char)205;
		}
	}
	for(int i = 4; i < 20; i++){
		gotoxy(3,i);
		cout<<(char)186;
		gotoxy(77,i);
		cout<<(char)186;
	}
}
class Bicicleta{	
	private:
		int x, y;
	public:
		Bicicleta(int x, int y){
			this->x = x;
			this->y = y;
		}
	void imprimir(){		// imprime bicicleta
		gotoxy(x,y);
		cout<<"   "<<(char)44<<(char)95<<(char)95<<(char)111;
		gotoxy(x,y + 1);
		cout<<" "<<(char)95<<(char)45<<(char)92<<(char)95<<(char)60<<(char)44;
		gotoxy(x,y + 2);
		cout<<(char)40<<(char)42<<(char)41<<(char)47<<(char)39<<(char)40<<(char)42<<(char)41;
	}
	void borrar(){
		gotoxy(x,y);
		cout<<"       ";
		gotoxy(x,y + 1);
		cout<<"       ";
		gotoxy(x,y + 2);
		cout<<"        ";	
	}
	
	void mover(){
		if(kbhit()){
			char tecla = getch();
			borrar();
			if(tecla == ARRIBA && y > 4){
				y--;
			}
			if(tecla == ABAJO && y < 17){
				y++;
			}
			if(tecla == DERECHA && x < 69){
				x++;
			}
			if(tecla == IZQUERDA && x > 4){
				x--;
			}
			imprimir();
		}
	}		
	
};
int main(){
	pintarLimites();
	ocultarCursor();
	gotoxy(35,1);
	cout<<" LA BICI ";
	gotoxy(30,2);
	cout<<"FLECHAS PARA MOVER";
	Bicicleta *bici = new Bicicleta(7,7);
	bici->imprimir();
	while(true){
		bici->mover();	
		
	}	
}