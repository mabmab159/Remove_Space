#include <iostream>
using namespace std;
main (){
	string dato;
	getline(cin,dato);
	int tamx=0;
	int contador=0;
	tamx=dato.length();
	// Contar los valores
	for (int i=0; i<tamx; i++){
		if(dato[i]==' '){
			contador++;
		}
	}
	// Restar los espacios;
	for (int i=0; i<tamx; i++){
		if(dato[i]==' '){
			// Si es igual que retroceda los valores;
			for (int j=i; j<(tamx); j++){
				dato[j]=dato[j+1];
				i--;
			}
		}
	}
	// Impresion
	for (int i=0; i<(tamx-contador);i++){
		cout << dato[i];
	}
}
