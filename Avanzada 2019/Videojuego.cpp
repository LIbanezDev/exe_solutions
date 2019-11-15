
#include<iostream>
#include<conio.h>

using namespace std;
class Ataque{
	private:
		int danho;
		int costo;
	public:
		Ataque(int danho, int costo){
			this->danho = danho;
			this->costo = costo;
		}	
		void setDanho(int danho){
			this->danho = danho;
		}
		int getDanho(){
			return danho;
		}
		void setCosto(int costo){
			this->costo = costo;
		}
		int getCosto(){
			return costo;
		}		
		void agregarHechizo(int danho, int costo){};
};
class Heroe{		
	protected:
		int p_ataque;
		int vida;
		string nombre;
		int armor;
		Ataque *ataques[4];
	public:
		Heroe(int vida, string nombre, int armor, int p_ataque){
			this->p_ataque = p_ataque;
			this->vida = vida;
			this->nombre = nombre;
			this->armor = armor;
		}
		void setP_ataque(int p){
			this->p_ataque = p;
		}
		int getP_ataque(){
			return p_ataque;
		}
		void setVida(int vida){
			this->vida = vida;
		}
		void setNombre(string nombre){
			this->nombre = nombre;
		}
		int getVida(){
			return vida;
		}
		string getNombre(){
			return nombre;
		}
		void setArmor(int armor){
			this->armor = armor;
		}
		int getArmor(){
			return armor;
		}
		void agregarHechizo(int danho, int costo){
			for(int i = 0; i < 4; i++){
				if(ataques[i] == NULL){
					ataques[i]->setDanho(danho);
					ataques[i]->setCosto(costo);
					break;
				}
			}
		} 
			
};
class Enemigo: public Heroe{	
	private:
		Ataque *ataquesx[3];
	public:
		Enemigo(int vida, string nombre, int armor, int p_ataque):Heroe(vida, nombre, armor, p_ataque){
		}
	void agregarHechizo(int danho, int costo){
			for(int i = 0; i < 3; i++){
				if(ataquesx[i] == NULL){
					ataquesx[i]->setDanho(danho);
					ataquesx[i]->setCosto(costo);
					break;
				}
			}
		} 		
};
class Juego{
	private:
		Enemigo *enemigos[4];
		Heroe *heroe;
	public:
		void addEnemigo(Enemigo *e){
			for(int i = 0; i < 4; i++){
				if(enemigos[i] == NULL){
					enemigos[i] = e;
					break;
				}
				if(enemigos[4] != NULL){
					cout<<"No hay espacio para mas enemigos"<<endl;
					break;
				}
			}
		}
		void addHeroe(Heroe *h){
			if(heroe == NULL){
				heroe = h;
			}else{
				cout<<"Ya hay un heroe en el juego!"<<endl;
			}			
		}
};
int main(){
	string n;
	int v;
	char d[50];
	Juego *juego = new Juego();
	cout<<endl;
	cout<<"				   COP SIMULATOR 2019"<<endl<<endl;
	cout<<"                Eres un paco, tu encomienda sera eliminar enemigos del estado"<<endl<<endl;
	cout<<"			Ingresa tu nombre de paco: ";
	cin>>n;
	cout<<endl;
	Heroe *heroe = new Heroe(1000, n, 65, 20);
	cout<<" "<<heroe->getNombre()<<", tus estadisticas son las siguientes:"<<endl<<endl;
	cout<<" "<<heroe->getVida()<<" de vida"<<endl;
	cout<<" "<<heroe->getArmor()<<" de armadura"<<endl<<endl;
	cout<<" "<<"Estos son tus enemigos! "<<endl<<endl;
	Enemigo *e1 = new Enemigo(300, "mapuche", 60, 20);
	Enemigo *e2 = new Enemigo(200, "liceano", 20,20);
	Enemigo *e3 = new Enemigo(150, "negro matapacos", 35,20);
	Enemigo *e4 = new Enemigo(320, "vendedor de verduras", 38,20);
	cout<<" Nombre:             "<<e1->getNombre()<<"   |   "<<e2->getNombre()<<"  |   "<<e3->getNombre()<<"  |  "<<e4->getNombre()<<endl;
	cout<<" Vida:                "<<e1->getVida()<<"      |     "<<e2->getVida()<<"    |        "<<e3->getVida()<<"         |        "<<e4->getVida()<<endl;
	cout<<" Armadura:             "<<e1->getArmor()<<"      |      "<<e2->getArmor()<<"    |         "<<e3->getArmor()<<"         |         "<<e4->getArmor()<<endl<<endl<<endl;

	
	cout<<"                                COMIENZA EL JUEGO"<<endl;
	cout<<" "<<"REGLAS"<<endl<<endl;
	cout<<" -"<<"Tanto tu como tus enemigos cuentan con 20 puntos de ataque al inicio del turno"<<endl;
	cout<<" -"<<"En cada turno deberas usar tus puntos de ataque disponibles."<<endl;
	cout<<" -"<<"Como paco, cuentas con 4 hechizos disponibles, los cuales consumen puntos de ataque."<<endl;
	cout<<" -"<<"A traves de "<<endl;
	
	while(true){
		cout<<" Es tu turno de atacar,"<<" tienes "<<heroe->getP_ataque()<<" puntos de ataque."<<endl;
		
		break;
		
		
		
		
	}
	

	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
