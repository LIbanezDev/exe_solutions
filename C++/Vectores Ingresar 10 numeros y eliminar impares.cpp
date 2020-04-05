/*

a) Crear un vector de entero, que debe almacenar 10 números ingresados por el usuario. 
b) Imprimir los números.
c) Eliminar todos los números impares.
d) Imprimirlos para comprobar.
 
*/

#include<vector>
#include<iostream>

using namespace std;

int main(){
	vector<int> numeros(10); 
	int num;
			
	for(int i = 0; i < numeros.size(); i++){  // a
		cout<<"Ingrese numero de posicion "<<i+1<<": ";
		cin>>num;
		numeros[i] = num;
	}
	cout<<"--------------"<<endl;
	for(int i = 0; i < numeros.size(); i++){  // b
		cout<<"Numero de posicion "<<i+1<<": "<<numeros[i]<<endl;
	}
	cout<<"--------------"<<endl;
	for(int i = 0; i < 10; i++){	// c
		if(numeros[i] % 2 == 1) numeros.erase(numeros.begin() + i);
	}
	cout<<"Se eliminaron los impares y asi quedo el vector: "<<endl;
	for(int i = 0; i < numeros.size(); i++){  // d
		cout<<"Numero de posicion "<<i+1<<": "<<numeros[i]<<endl;
	}
	
	
	return 0;
}
