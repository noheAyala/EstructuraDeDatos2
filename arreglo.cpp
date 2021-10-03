#include <iostream>
#include <array>

using namespace std;

const int TAMANIO = 10;


void imprimirArreglo(array<int, TAMANIO> &arr, int num_elementos){
	for (int i=0; i< arr.size() && i < num_elementos; i++){
		cout << arr[i] << endl;
	}
}
int main(){
	array<int, TAMANIO > miArreglo;
	for (int i =0; i<TAMANIO; i++){
		cin >> miArreglo[i];
	}
	cout << "cantidad de elementos: " << miArreglo.size() << endl;
	cout << "primeros 10 elementos: "  << endl;
	imprimirArreglo(miArreglo, 10);
	
	return 0;
	
}

