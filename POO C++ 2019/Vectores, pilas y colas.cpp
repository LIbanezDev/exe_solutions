/*
 VECTORES PILAS Y COLAS C++
*/

#include<iostream>
#include<queue>
#include<stack>
#include<vector>

using namespace std;

class CartaDeBaraja{
	private:
		string nombre;
		int numero, edicion;
	public:
		CartaDeBaraja(string nombre, int numero, int edicion){
			this->nombre = nombre;
			this->numero = numero;
			this->edicion = edicion;			
		}
		string getNombre(){
			return nombre;
		}
		int getNumero(){
			return numero;
		}
		int getEdicion(){
			return edicion;
		}			
};
class CartaParaVender{
	private:
		string nombre;
		int precio;
		char estado; // n = nueva - g = gastada
	public:
		CartaParaVender(string nombre, int precio, char estado){
			this->nombre = nombre;
			this->precio = precio;
			this->estado = estado;			
		}
		string getNombre(){
			return nombre;
		}
		int getPrecio(){
			return precio;
		}
		int getEstado(){
			return estado;
		}	
		void setPrecio(int precio){
			this->precio = precio;
		}
};

int main(){
		int opcion, numero, edicion, precio;
		string nombre;
		char estado;
		vector <int> edicionesSacadas(20);		 
		queue <CartaDeBaraja *> cartasBaraja;
		stack <CartaParaVender *> cartasAVender;
		
		for(int i = 0; i < 20; i++){
			edicionesSacadas[i] = 0;
		}
		
	do{
		cout<<"---------------------"<<endl;
		cout<<" 1) Agregar carta a la baraja. "<<endl;
		cout<<" 2) Sacar carta de la baraja. "<<endl;
		cout<<" 3) Agregar carta a la venta. "<<endl;
		cout<<" 4) Vender carta. "<<endl;
		cout<<" 5) Salir. "<<endl;
		cout<<"---------------------"<<endl;
		cout<<"Ingrese opcion a realizar: ";
		cin>>opcion;
		cout<<"---------------------"<<endl;
				
		if(opcion == 1){
			cout<<"Nombre: ";
			cin>>nombre;
			cout<<"Numero: ";
			cin>>numero;
			cout<<"Edicion: ";
			cin>>edicion;
			cartasBaraja.push(new CartaDeBaraja(nombre, numero, edicion));
		}
		if(opcion == 2){					
			cout<<"Se quito la siguiente carta: "<<endl;
			cout<<"Nombre: "<<cartasBaraja.front()->getNombre()<<endl;
			cout<<"Edicion: "<<cartasBaraja.front()->getEdicion()<<endl;
			cout<<"Se habian sacado "<<edicionesSacadas[cartasBaraja.front()->getEdicion()]<<" cartas de la misma edicion "<<endl;
			cout<<"---------------------"<<endl;
			edicionesSacadas[cartasBaraja.front()->getEdicion()]++;			
			cartasBaraja.pop(); 
		}
		if(opcion == 3){
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"Precio: ";
				cin>>precio;
				cout<<"Estado de la carta (n = nueva / g = gastada): ";
				cin>>estado;
				cartasAVender.push(new CartaParaVender(nombre, precio, estado));
		}
		if(opcion == 4){
			cout<<"Nombre: "<<cartasAVender.top()->getNombre()<<endl;
			cout<<"Precio: "<<cartasAVender.top()->getPrecio()<<endl;
			if(cartasAVender.top()->getEstado() == 'g'){
				cartasAVender.top()->setPrecio(cartasAVender.top()->getPrecio() / 2);
				cout<<"La carta esta usada, asi que se vendio a "<<cartasAVender.top()->getPrecio()<<" kamas"<<endl;
			}else{
				cout<<"La carta esta nueva, asi que se vendio a su precio original"<<endl;
			}			
			cartasAVender.pop();
		}			
	}while(opcion != 5);
	
	return 0;
}
