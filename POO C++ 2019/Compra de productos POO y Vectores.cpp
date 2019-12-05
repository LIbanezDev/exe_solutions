/* Con saldo inicial de 50.000, 
elegir cuanto de cada producto es mejor comprar priorizando los cuales tengan mayor 
popularidad / precio por Ml */ 

#include<vector>
#include<iostream>

using namespace std;

class Producto{
	private:
		string nombre;
		int ppml, popularidad, stock;
	public:
		Producto(string nombre, int ppml, int popularidad, int stock){
			this->nombre = nombre;
			this->ppml = ppml;
			this->popularidad = popularidad;
			this->stock = stock;
		}
		string getNombre(){
			return nombre;
		}
		int getPpml(){
			return ppml;
		}
		int getPopularidad(){
			return popularidad;
		}
		int getStock(){
			return stock;
		}
		float getIndice(){
			return popularidad / ppml;
		}
	
};
int main(){
	vector<Producto *> lista;
	string name;
	int ppml, popularidad, stock, saldo = 50000;
	while(true){			// Se llena el vector de productos hasta digitar "FinDeProducto"
		cout<<"Nombre de producto: ";
		cin>>name;
		if(name == "FinDeProducto")break;
		cout<<"Precio por mL: ";
		cin>>ppml;
		cout<<"Popularidad: ";
		cin>>popularidad;
		cout<<"Stock: ";
		cin>>stock;
		lista.push_back(new Producto(name, ppml, popularidad, stock));		
	}
	
	float mayor;								// Declaracion de variables utiles para el objetivo del problema 
	int a_pagar, menoracero = 0, c, saldo2;
	
	while(saldo > 0){		// Algoritmo para elegir cuales productos comprar
		
		for(int i = 0; i < lista.size(); i++){	// Se obtiene el indice del produto con la mayor popularidad para ser comprado 
			
			if(i == 0) mayor = lista.at(i)->getIndice();
			
			else if(lista.at(i)->getIndice() > mayor) mayor = lista.at(i)->getIndice();					
		}
		
		for(int i = 0; i < lista.size(); i++){
			
			if(lista.at(i)->getIndice() == mayor){		
				
				a_pagar = lista.at(i)->getPpml() * lista.at(i)->getStock();		// a_pagar almacena el precio que se debera cancelar en caso de comprar todo el stock disponible
				
				if(saldo - a_pagar >= 0){	// Si saldo actual 0-50.000 menos todo el stock del producto elegido es mayor a 0, entonces se compra todo
					
					saldo -= a_pagar;
					cout<<"Se compraron "<<lista.at(i)->getStock()<<" mL de "<<lista.at(i)->getNombre()<<endl;
					lista.erase(lista.begin() + i);
					cout<<"Tiene "<<saldo<<"$"<<endl;
					break;
				
				}else{	// En caso contrario se calcula cuanto de ML se debera comprar del producto con tal de que el saldo sea igual a 0
					
					saldo2 = saldo;
					saldo2 -= a_pagar;
					menoracero = saldo2 * (-1);
					a_pagar -= menoracero;
					saldo -= a_pagar;
					cout<<"Se compraron "<<a_pagar / lista.at(i)->getPpml()<<" mL de "<<lista.at(i)->getNombre()<<endl;
					cout<<"Tiene "<<saldo<<"$"<<endl;
					break;
									
				}
			}
		}		
	}
}
