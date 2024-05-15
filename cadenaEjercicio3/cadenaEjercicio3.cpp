/*
* Bloque 7.
* Cadena de caracteres 
* 
* Ejercicio 3
* 
* Pedir al usuario que digite 2 cadenas de caracteres, e
* indicar si ambas cadenas son iguales, en caso de no serlo 
* indicar cual es mayor alfabeticamente.
* 
*/
#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;


int main() {

	char cadena1[20];
	char cadena2[20];
	int comparacion1 = 0;
	int comparacion2 = 0;

	cout << "\nDigite dos cadenas ";
	cin >> cadena1 >> cadena2;

	comparacion1 = strlen(cadena1);
	comparacion2 = strlen(cadena2);

	if (strcmp(cadena1, cadena2) == 0) {

		cout << "\nAmbas cadenas son iguales: "<<endl;
	}
	else if( comparacion1 > comparacion2 ) {

		cout << cadena1 << " es mayor alfabeJticamente a: " << cadena2<<endl;
	}
	else if (comparacion2 > comparacion1) {
		cout << cadena2 << " es mayor alfabeticamente a: " << cadena1<<endl;
	}

	cin.get();
	return 0;
}
