
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
		int ataque;
		int p_ataque;
		int vida;
		string nombre;
		int armor;
		Ataque *ataques[3];
	public:
		Heroe(int vida, string nombre, int ataque, int armor, int p_ataque){
			this->ataque  = ataque;
			this->p_ataque = p_ataque;
			this->vida = vida;
			this->nombre = nombre;
			this->armor = armor;
		}
		void setAtaque(int ataque){
			this->ataque = ataque;
		}
		int getAtaque(){
			return ataque;
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
			for(int i = 0; i < 3; i++){
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
		Enemigo(int vida, string nombre, int ataque, int armor, int p_ataque):Heroe(vida, nombre, ataque, armor, p_ataque){
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
		void atacarEnemigo(string nombreEnemigo){
			for(int i = 0; i < 4; i++){
				if(enemigos[i]->getNombre() == nombreEnemigo){
					if(heroe != NULL){
					cout<<"El heroe a atacado al enemigo: "<<nombreEnemigo<<"!!"<<endl;
					enemigos[i]->setVida(enemigos[i]->getVida() - heroe->getAtaque());
					cout<<"La vida del enemigo quedo en "<<enemigos[i]->getVida()<<endl;
					}else{
						break;
					}
				}
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
	Heroe *heroe = new Heroe(1000, n, 25, 65, 20);
	cout<<" "<<heroe->getNombre()<<", tus estadisticas son las siguientes:"<<endl<<endl;
	cout<<" "<<heroe->getVida()<<" de vida"<<endl;
	cout<<" "<<heroe->getAtaque()<<" de ataque"<<endl;
	cout<<" "<<heroe->getArmor()<<" de armadura"<<endl<<endl;
	cout<<" "<<"Estos son tus enemigos! "<<endl<<endl;
	Enemigo *e1 = new Enemigo(300, "mapuche", 15, 60, 20);
	Enemigo *e2 = new Enemigo(200, "liceano", 45, 20,20);
	Enemigo *e3 = new Enemigo(150, "negro matapacos", 25, 35,20);
	Enemigo *e4 = new Enemigo(320, "vendedor de verduras", 30, 38,20);
	cout<<" Nombre:             "<<e1->getNombre()<<"   |   "<<e2->getNombre()<<"  |   "<<e3->getNombre()<<"  |  "<<e4->getNombre()<<endl;
	cout<<" Vida:                "<<e1->getVida()<<"      |     "<<e2->getVida()<<"    |        "<<e3->getVida()<<"         |        "<<e4->getVida()<<endl;
	cout<<" Ataque:               "<<e1->getAtaque()<<"      |      "<<e2->getAtaque()<<"    |         "<<e3->getAtaque()<<"         |         "<<e4->getAtaque()<<endl;
	cout<<" Armadura:             "<<e1->getArmor()<<"      |      "<<e2->getArmor()<<"    |         "<<e3->getArmor()<<"         |         "<<e4->getArmor()<<endl<<endl<<endl;

	
	cout<<"                                COMIENZA EL JUEGO"<<endl;
	cout<<" "<<"REGLAS: "<<endl;
	
	while(true){
		cout<<"Es tu turno de atacar."<<endl<<endl;
		cout<<"Tienes: ";
		break;
		
		
		
		
	}
	

	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
