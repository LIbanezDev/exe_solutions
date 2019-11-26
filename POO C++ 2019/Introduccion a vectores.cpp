#include <iostream>
#include <vector>
using namespace std;
/*
	Para entender la realización de los ejercicios de la ayudantía es necesario conocer las funciones .begin() y .end(), las cuales devuelven un iterador.
	Deben saber que un iterador es COMO un puntero (ES NECESARIO QUE INVESTIGUEN)
	Si tenemos un vector v, v.begin() nos devolverá un iterador al comienzo del vector y v.end() retornará un iterador al final, el cual será siempre NULL.
	(EJEMPLO) Forma de declarar un iterador de un vector de strings:
	vector <string> v;
	vector <string>::iterator i=v.begin(); INICIALIZAMOS UN ITERADOR AL COMIENZO DE NUESTRO VECTOR
	!!!!!!! También es importante destacar que la funcion .erase(position) recibe un iterador como posición y NO un número como estamos acostumbrados.
*/
int main(){
	vector <int> v; //Declaramos un vector de enteros
	int number;
	for(int i=0;i<5;i++){
		cout << "Ingrese numero: "; cin >> number; //Pedimos un número
		v.push_back(number);	//Guardamos el número en el vector
	}
	cout << "Los 100 números son: " << endl;
	for(int i=0;i<v.size();i++){ //Imprimimos los 100 números
		cout << v[i] << endl;
	}
	for(vector <int>::iterator i=v.begin() ; i != v.end() ; i++){ // FORMA DE RECORRER UN VECTOR, PARA IR BORRANDO ELEMENTOS DENTRO DE ÉL.
		if((*i)%2!=0){								// NOTAR QUE COMO UN ITERADOR ES PARECIDO A UN PUNTERO, LA EXPRESIÓN *i DEVUELVE EL ELEMENTO EN SÍ
			v.erase(i);											  // ESTUDIE !! ANALÍCE
		}
	}
	cout << "---------------------------------------" << endl;
	cout << "Los números pares son" << endl;
	for(int i=0;i<v.size();i++){ //Imprimimos todos los números (pares) que quedaron
		cout << v[i] << endl;
	}
}
