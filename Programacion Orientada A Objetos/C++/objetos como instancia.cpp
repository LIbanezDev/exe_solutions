#include<iostream>
#include<vector>
using namespace std;

class Deportista{
	private:
		string nombre, especialidad;
		int sueldo;
	public:
		Deportista(string nombre, string especialidad, int sueldo){
			this->nombre = nombre;
			this->especialidad = especialidad;
			this->sueldo = sueldo;
		}
		void setNombre(string nombre){
			this->nombre = nombre;
		}
		void setEspecialidad(string especialidad){
			this->especialidad = especialidad;
		}
		void setSueldo(int sueldo){
			this->sueldo = sueldo;
		}
		string getEspecialidad(){
			return especialidad;
		}
		string getNombre(){
			return nombre;
		}
		int getSueldo(){
			return sueldo;
		}
};
class AvionOlimpico{
	private:
		Deportista *deportistas[100];	
	public:
		void iniciarAvion(){
			for(int i = 0; i < 100; i++){
				deportistas[i] == NULL;
			}
		}
		void ingresarDeportista(Deportista *d){
			for(int i = 0; i < 100; i++){
				if(deportistas[i] == NULL){
					deportistas[i] = d;
					break;
				}
			}
			if(deportistas[99] != NULL){
				cout<<"No hay mas espacio en el avion"<<endl;
			}
		}
		void imprimirComitiva(){
			for(int i = 0; i < 100; i++){
				if(deportistas[i] != NULL){
					cout<<"Asiento"<<i+1<<": "<<deportistas[i]->getNombre()<<" / "<<deportistas[i]->getEspecialidad()<<" / "<<deportistas[i]->getSueldo()<<"."<<endl;
				}else{
					continue;
				}
			}
		}		
};
int main(){
	Deportista *lucapo = new Deportista("Lucas", "masturbarse", 200000);
	Deportista *lucapo1 = new Deportista("saco wea", "hijo de puta", 120000);
	AvionOlimpico *avion = new AvionOlimpico();
	avion->iniciarAvion();
	avion->ingresarDeportista(lucapo);
	avion->ingresarDeportista(lucapo1);
	avion->imprimirComitiva();
}
