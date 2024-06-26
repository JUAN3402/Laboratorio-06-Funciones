#include <iostream>
using namespace std;
/*1. Escribir una función que retorne el resultado de elevar un número entero a cualquier potencia entera. El resultado devuelto debe ser del tipo long.*/
//long almacena mas numeros que int
long potencia(int base, int exponente){
long resultado = 1;
for(int i = 0; i < exponente; i++){
resultado *= base;
}
return resultado;
}

int main(){
int base, exponente;
cout << "Ingrese la base: ";
cin >> base;
cout << "Ingrese el exponente: ";
cin >> exponente;
cout << "El resultado de " << base << " elevado a " << exponente << " es: " << potencia(base, exponente) <<endl;
return 0;
}