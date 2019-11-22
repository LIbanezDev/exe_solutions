/*
Hace un tiempo, y posterior a su primer trabajo estable usted descubrió el mundo de las tarjetas bancarias, 
ilusionado por todo lo que podia comprar con sus créditos decidió sacar cada tarjeta que le ofrecian. 
Como era de suponer, usted termino con muchas deudas, que después de un arduo trabajo pudo salir de ellas. 
¿El problema?. Ahora usted tienen muchas de ellas, lo cual es ineficiente e innecesario, 
por lo que crea un programa que le ayude a clasificarlas y posteriormente saber con cual se conviene quedar. 
Cada tarjeta tiene las siguientes caracteristicas en común: 
-Nombre del banco o retail. 
-Giro máximo diario.($) 
-Cupo máximo.($) 
-Cantidad de convenios. 
Dentro de las tarjetas que usted maneja, encuentra que tiene 3 tipos: Tarjeta vista, tarjeta de crédito y cuenta corriente. 
En caso de las tarjetas vista: Edad máxima sin cobros y si permite mejorarla a una cuenta corriente o no. 
Tarjeta de crédito: Si es Visa o Mastercard y cupo en dolares. Cuenta corriente: Cantidad de tarjetas adicionales. 

De acuerdo a lo anteriormente mencionado, se le pide que creen una clase padre llamada Tarjeta y una clase hija por cada tipo, 
con sus respectivos sets y gets. 
Posteriormente, se les pedirá realizar un main que les permita guardar todas las tarjetas que usted tiene, 
para eso es necesario crear un arreglo de tarjetas de tamano 30 y un menú que les permita agregar al usuario cualquier 
tipo de tarjeta hasta que el estime conveniente. (Se recomienda preguntar el tipo de tarjeta a agregar). 
Finalmente y posterior a la adición de las tarjetas: 
-El cupo máximo de la tarjeta con el giro máximo más grande. 
-El nombre del banco o retail de la tarjeta con mayor cantidad de convenios. 
-Y la mejor tarjeta con la mayor ponderación. 

Calculo ponderación = (GiroMaximo)*0,3+(Cupomaximo)*0,2+(Cantidaddeconvenios)*0,1 

*/

#include<iostream>

using namespace std;

class Tarjeta{
	protected:
		string banco;
		int gmaximod, cmaximo, convenios;
	public:
		Tarjeta(string banco, int gmaximod, int cmaximo, int convenios){
			this->banco = banco;
			this->gmaximod = gmaximod;
			this->cmaximo = cmaximo;
			this->convenios = convenios;			
		}
		void setBanco(string banco){
			this->banco = banco;
		}
		void setGmaximod(int gmaximod){
			this->gmaximod = gmaximod;
		}
		void setCmaximo(int cmaximo){
			this->cmaximo = cmaximo;
		}
		void setConvenios(int convenios){
			this->convenios = convenios;
		}
		string getBanco(){
			return banco;;
		}
		int getGmaximod(){
			return gmaximod;
		}
		int getCmaximo(){
			return cmaximo;
		}
		int getConvenios(){
			return convenios;
		}
		float getPonderacion(){
			float ponderacion = ((gmaximod * 0.3) + (cmaximo* 0.2) + (convenios * 0.1));
			return ponderacion;
		}
};
class Vista: public Tarjeta{
	private:
		int edad_maxima;
		bool permite_mejorar;
	public:
		Vista(string banco, int gmaximod, int cmaximo, int convenios, int edad_maxima, bool permite_mejorar):Tarjeta(banco, gmaximod, cmaximo, convenios){
			this->edad_maxima = edad_maxima;
			this->permite_mejorar = permite_mejorar;
		}
		void setEdad_maxima(int edad_maxima){
			this->edad_maxima = edad_maxima;
		}
		int getEdad_maxima(){
			return edad_maxima;
		}
		void setPermite_mejorar(bool permite_mejorar){
			this->permite_mejorar = permite_mejorar;
		}
		bool getPermite_mejorar(){
			return permite_mejorar;
		}		
	
	
};
class Credito: public Tarjeta{
	private:
		int cupousd;
		bool visa_mastercard; // visa = true, mastercard = false
	public:
		Credito(string banco, int gmaximod, int cmaximo, int convenios, int cupousd, bool visa_mastercard):Tarjeta(banco, gmaximod, cmaximo, convenios){
			this->cupousd = cupousd;
			this->visa_mastercard = visa_mastercard;
		}
		void setCupousd(int cupousd){
			this->cupousd = cupousd;
		}
		int getEdad_maxima(){
			return cupousd;
		}
		void setVisa_mastercard(bool visa_mastercard){
			this->visa_mastercard = visa_mastercard;
		}
		bool getPermite_mejorar(){
			return visa_mastercard;
		}		
	
};
class Corriente: public Tarjeta{
	private:
		int tarjetas_adicionales;
	public:
		Corriente(string banco, int gmaximod, int cmaximo, int convenios, int tarjetas_adicionales):Tarjeta(banco, gmaximod, cmaximo, convenios){
			this->tarjetas_adicionales = tarjetas_adicionales;
		}
		void setTarjetas_adicionales(int tarjetas_adicionales){
			this->tarjetas_adicionales = tarjetas_adicionales;
		}
		int getEdad_maxima(){
			return tarjetas_adicionales;
		}			
};
int main(){
	Tarjeta *t[30];
	string tipo, banco;
	int giro_maximo, cupo_maximo, convenios, edad_maxima, cupo_usd, tarjetas_adicionales;
	string permite_mejorar, visa_mastercard;
	bool permite_mejorarbool, visa_mastercardbool;
	int n = 1, i = 0;
	
	while(true){			// Agregar tarjetas
	
		cout<<"Tipo de tarjeta a agregar (vista, corriente o credito): ";
		cin>>tipo;
		cout<<"Giro maximo: ";
		cin>>giro_maximo;
		cout<<"Cupo maximo: ";
		cin>>cupo_maximo;
		cout<<"Cantidad de convenios: ";
		cin>>convenios;			
		
		if(tipo == "vista"){
			cout<<"Edad maxima sin cobros: ";
			cin>>edad_maxima;
			cout<<"¿Permite mejorar a cuenta corriente?";
			cin>>permite_mejorar;		
			if(permite_mejorar == "si"){
				permite_mejorarbool = true;
			}else{
				permite_mejorarbool = false;
			}
			t[i] = new Vista(banco, giro_maximo, cupo_maximo, convenios, edad_maxima, permite_mejorarbool);
		}		
		if(tipo == "credito"){
			cout<<"Cupo en dolares: ";
			cin>>cupo_usd;
			cout<<"¿Visa o MasterCard?"<<endl;
			cin>>visa_mastercard;		
			if(visa_mastercard == "visa"){
				visa_mastercardbool = true;
			}else{
				visa_mastercardbool = false;
			}
			t[i] = new Credito(banco, giro_maximo, cupo_maximo, convenios, cupo_usd, visa_mastercardbool);
		}			
		if(tipo == "corriente"){
			cout<<"Tarjetas adicionales: ";
			cin>>tarjetas_adicionales;		
			
			t[i] = new Corriente(banco, giro_maximo, cupo_maximo, convenios, tarjetas_adicionales);
		}		
		
		if(t[29] != NULL && i == 29){
			cout<<"No espacio para mas tarjetas."<<endl;
			break;
		}
		cout<<"1.- Agregar otra tarjeta."<<endl;
		cout<<"2.- Salir."<<endl;
		cin>>n;	
		if(n == 2){
			break;
		}
		i++;
	}
	int mayor = 0;
	int cupo_mayor = 0;
	for(int i = 0; i < 30; i++){		// El cupo maximo de la tarjeta con el giro maximo mas grande.
		if(t[i]->getGmaximod() > mayor){
			mayor = t[i]->getGmaximod();
			cupo_mayor = t[i]->getCmaximo();
		}
	}
	cout<<"Cupo maximo de la tarjeta con el giro maximo mas grande es de "<<cupo_mayor<<" pesos."<<endl;
	
	mayor = 0;
	string nombre;
	for(int i = 0; i < 30; i++){  // El nombre del banco o retail de la tarjeta con mayor cantidad de convenios.
		if(t[i]->getConvenios() > mayor){
			mayor = t[i]->getConvenios();
			nombre = t[i]->getBanco();
		}		
	}
	cout<<"El nombre de banco o retail de la tarjeta con la mayor cantidad de convenios es "<<nombre<<endl;
	
	mayor = 0;
	
	for(int i = 0; i < 29; i++){
		if(t[i]->getPonderacion() > t[i+1]->getPonderacion() || t[i]->getPonderacion() == t[i+1]->getPonderacion()){
			mayor = i;
		}else{
			mayor = i+1;
		}
	}
	cout<<"Los datos de la tarjeta con mayor ponderacion son: ";
	cout<<"Nombre del banco o retail: "<<t[mayor]->getBanco()<<endl;
	cout<<"Giro máximo diario: "<<t[mayor]->getGmaximod()<<endl;
	cout<<"Cupo máximo: "<<t[mayor]->getCmaximo()<<endl;
	cout<<"Cantidad de convenios: "<<t[mayor]->getConvenios()<<endl;
	
	return 0;
}
