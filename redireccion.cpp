#include <iostream>
#include <string>

using namespace std;

int main(){
	string nombre;
	cout << "escriba su nombre:  ";
	getline(cin, nombre);
	cout << "hola, " << nombre;
	
	return 0;
}
