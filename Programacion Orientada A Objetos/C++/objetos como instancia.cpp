#include<iostream>
#include<vector>
using namespace std;


int main(){
vector<int> numeros(4);
int n, k = numeros.size();
for(int i = 0; i < k; i++){
	cout<<"Numero posicion "<<i<<": ";
	cin>>n;
	numeros.push_back(n);	
}	
}
