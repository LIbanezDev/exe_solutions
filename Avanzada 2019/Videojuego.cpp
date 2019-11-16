
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Ataque{
	private:
		int danhomax;
		int danhomin;
		int costo;
		string nombre;
		int id;
	public:
		Ataque(int id, string nombre, int danhomax, int danhhomin, int costo){
			this->danhomax = danhomax;
			this->costo = costo;
			this->nombre = nombre;
			this->danhomin = danhomin;
			this->id = id;
		}	
		int getId(){
			return id;  
		}		
		void setDanhomax(int danhomax){
			this->danhomax = danhomax;
		}
		int getDanhomax(){
			return danhomax;  
		}
		void setDanhomin(int danhomin){
			this->danhomin = danhomin;
		}
		int getDanhomin(){
			return danhomin; 
		}		
		void setNombre(string nombre){
			this->nombre = nombre;
		}
		string getNombre(){
			return nombre;
		}
		void setCosto(int costo){
			this->costo = costo;
		}
		int getCosto(){
			return costo;
		}		
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
	void agregarAtaquesheroe(Ataque *a, Ataque *b, Ataque *c, Ataque *d){
		ataques[0] = a;
		ataques[1] = b;
		ataques[2] = c;
		ataques[3] = d;
	} 
	Ataque getAtaque(int id){
		for(int i = 0; i < 4; i++){
			if(ataques[i]->getId() == id){
				return *ataques[i];
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
	void agregarAtaquesenemigos(Ataque *a, Ataque *b, Ataque *c){
		ataques[0] = a;
		ataques[1] = b;
		ataques[2] = c;
	} 		
};
class Juego{
	private:
		Enemigo *enemigos[4];
		Heroe *heroe;
	public:
		void addEnemigo(Enemigo *a, Enemigo *b, Enemigo *c, Enemigo *d){
			enemigos[0] = a;
			enemigos[1] = b;
			enemigos[2] = c;
			enemigos[3] = d;
		}
		void addHeroe(Heroe *h){
			if(heroe == NULL){
				heroe = h;
			}else{
				cout<<"Ya hay un heroe en el juego!"<<endl;
			}			
		}
		void atacarEnemigo(Ataque *a, int id){			
				srand((int)time(0));			
				cout<<a->getDanhomin();
				int danho = (rand() % a->getDanhomax()) + a->getDanhomin();
				cout<<endl;
				cout<<" El ataque "<<a->getNombre()<<" ha causado "<<danho<<" pts!"<<endl;
				int armor = (enemigos[id]->getArmor() * 0.25) / 100;				
				int vida = enemigos[id]->getVida();	
				int vidafinal = vida * armor;
				cout<<" "<<enemigos[id]->getNombre()<<" ha mitigado "<<vida - vidafinal<<" de danho!"<<endl;
				enemigos[id]->setVida(vidafinal);
				cout<<" "<<enemigos[id]->getNombre()<<" quedo con "<<enemigos[id]->getVida()<<" de vida!"<<endl;					
		}
		
};
int main(){
	string n;
	int id, at;
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
	Ataque *a1 = new Ataque(1,"batazo", 30, 15, 4);
	Ataque *a2 = new Ataque(2,"lacrimogena", 45, 30, 8);
	Ataque *a3 = new Ataque(3,"zorrillo", 35, 20, 6);
	Ataque *a4 = new Ataque(4,"combo", 20, 10, 2);
	a1->setDanhomin(15); a2->setDanhomin(30); a3->setDanhomin(20); a4->setDanhomin(10);
	heroe->agregarAtaquesheroe(a1, a2, a3, a4);
	cout<<" Nombre:             "<<e1->getNombre()<<"   |   "<<e2->getNombre()<<"  |   "<<e3->getNombre()<<"  |  "<<e4->getNombre()<<endl;
	cout<<" Vida:                "<<e1->getVida()<<"      |     "<<e2->getVida()<<"    |        "<<e3->getVida()<<"         |        "<<e4->getVida()<<endl;
	cout<<" Armadura:             "<<e1->getArmor()<<"      |      "<<e2->getArmor()<<"    |         "<<e3->getArmor()<<"         |         "<<e4->getArmor()<<endl<<endl<<endl;
	juego->addHeroe(heroe);
	juego->addEnemigo(e1, e2, e3, e4);
	getch();
	system("CLS()"); 
	cout<<endl;
	cout<<"                                COMIENZA EL JUEGO"<<endl<<endl;
	cout<<"				     REGLAS"<<endl<<endl<<endl;
	cout<<" -"<<" Tanto tu como tus enemigos cuentan con 20 puntos de ataque al inicio del turno"<<endl<<endl;
	cout<<" -"<<" En cada turno deberas usar tus puntos de ataque disponibles."<<endl<<endl;
	cout<<" -"<<" Cuentas con 4 hechizos disponibles, los cuales consumen puntos de ataque."<<endl<<endl;
	cout<<" -"<<" En cada turno, eliges a quien atacar mediante un ID de 1 a 4 y"<<endl<<endl;
	cout<<" "<<"  luego seleccionas los ataques a lanzar tambien con ID de 1 a 4 ";
	getch();
	system("CLS()");
		
		cout<<endl;
		cout<<" Es tu turno de atacar,"<<" tienes "<<heroe->getP_ataque()<<" puntos de ataque."<<endl<<endl;
		cout<<" Nombre:           1."<<e1->getNombre()<<"   | 2."<<e2->getNombre()<<"  | 3."<<e3->getNombre()<<"  | 4."<<e4->getNombre()<<endl;
		cout<<" Vida:                "<<e1->getVida()<<"      |     "<<e2->getVida()<<"    |        "<<e3->getVida()<<"         |         "<<e4->getVida()<<endl;
		cout<<" Armadura:             "<<e1->getArmor()<<"      |      "<<e2->getArmor()<<"    |         "<<e3->getArmor()<<"         |          "<<e4->getArmor()<<endl<<endl;
		cout<<" Ataques disponibles."<<endl<<endl;
		cout<<" 1- "<<a1->getNombre()<<" "<<a1->getDanhomin()<<"-"<<a1->getDanhomax()<<" "<<a1->getCosto()<<"P.A"<<endl;
		cout<<" 2- "<<a2->getNombre()<<" "<<a2->getDanhomin()<<"-"<<a2->getDanhomax()<<" "<<a2->getCosto()<<"P.A"<<endl;
		cout<<" 3- "<<a3->getNombre()<<" "<<a3->getDanhomin()<<"-"<<a4->getDanhomax()<<" "<<a3->getCosto()<<"P.A"<<endl;
		cout<<" 4- "<<a4->getNombre()<<" "<<a4->getDanhomin()<<"-"<<a4->getDanhomax()<<" "<<a4->getCosto()<<"P.A"<<endl<<endl;
		cout<<" Ingresa ID de enemigo a atacar: ";
		cin>>id;		
		cout<<" Ingresa ID de ataque a utilizar: ";
		cin>>at;
		at--;
		juego->atacarEnemigo(a1, 2);
		
			
	getch();
	return 0;
}
