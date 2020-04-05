/*
Cree la clase Canción, con su constructor y métodos get(). Cada canción cuenta con un nombre y nombre del artista. 
Además usted debe registrarlas.

En la función main():
• Crear 4 canciones y registrarlas.
• Imprimir cuántas canciones se tienen registradas.
• Imprimir el nombre de cada Canción registrada.
• Mostrar la primera y última Canción registrada.
• Solicitar el nombre de una Canción, en caso de que esté registrada, eliminarla, en caso contrario, 
  indicar que no se tienen registros de esa Canción.
• Crear una Canción, registrarla y luego eliminar la penúltima.
• Solicitar el nombre de un artista e indicar cuántas canciones de ese artista hay registradas.


*/
#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;
class Cancion{
	private:
		string nombre, artista;
	public:
		Cancion(string nombre, string artista){
			this->nombre = nombre;
			this->artista = artista;
		}
		void setNombre(string nombre){
			this->nombre = nombre;
		}
		void setArtista(string artista){
			this->artista = artista;
		}
		string getNombre(){
			return nombre;
		}
		string getArtista(){
			return artista;
		}	
};
int main(){
	vector <Cancion *> canciones;
	canciones.push_back(new Cancion("h1","a1"));
	canciones.push_back(new Cancion("h2","a2"));
	canciones.push_back(new Cancion("h3","a3"));
	canciones.push_back(new Cancion("h4","a1"));
	
	cout<<"Cantidad de canciones registradas: "<<canciones.size()<<endl;
	
	for(int i = 0; i < canciones.size(); i++){
		cout<<"Cancion numero "<<i<<": "<<canciones[i]->getNombre()<<", Artista: "<<canciones[i]->getArtista()<<endl;
	}
	
	cout<<"Primera cancion. "<<endl;
	cout<<"Nombre: "<<canciones.front()->getNombre()<<" Artista: "<<canciones.front()->getArtista()<<endl;
	cout<<"Ultima cancion. "<<endl;
	cout<<"Nombre: "<<canciones.back()->getNombre()<<" Artista: "<<canciones.back()->getArtista()<<endl;
	string n;
	cout<<"Ingrese nombre de cancion a eliminar: ";
	cin>>n;
	for(int i = 0; i < canciones.size(); i++){
		if(canciones[i]->getNombre() == n){
			canciones.erase(canciones.begin() + i);
			break;
		}
		if(i == 3){
			cout<<"No se encontro la cancion solicitada."<<endl;
		}		
	}
	cout<<"----------------------------"<<endl;
	
	for(int i = 0; i < canciones.size(); i++){
		cout<<"Cancion numero "<<i<<": "<<canciones[i]->getNombre()<<", Artista: "<<canciones[i]->getArtista()<<endl;
	}
	
	Cancion *c = new Cancion("hola", "lucapo");
	canciones.push_back(c);
	canciones.erase(canciones.begin() + canciones.size() - 2);	
	
	cout<<"----------------------------"<<endl;
	
	for(int i = 0; i < canciones.size(); i++){
		cout<<"Cancion numero "<<i<<": "<<canciones[i]->getNombre()<<", Artista: "<<canciones[i]->getArtista()<<endl;
	}	
	cout<<"Nombre de un artista: ";
	cin>>n;
	int k = 0;
	for(int i = 0; i < canciones.size(); i++){
		if(canciones[i]->getArtista() == n){
			k++;
		}
	}
	cout<<"----------------------------"<<endl;
	cout<<"Hay "<<k<<" canciones del artista "<<n<<endl;
	
	
	
}
