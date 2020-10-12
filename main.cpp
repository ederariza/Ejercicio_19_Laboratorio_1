/*
Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo
*/

#include <iostream>
using namespace std;

int main(){

    int numero_ingresado;
    int contador = 0;

    cout << "Ingrese el numero: ";
    cin >> numero_ingresado;

    for(int i=1; i<=numero_ingresado; i++) {

        if((numero_ingresado % i) == 0) {
                contador += 1;

                if((contador > 2) || (numero_ingresado == 1)) {
                    cout << "El numero " << numero_ingresado << " no es primo" << endl;
                    break;
                }

                else {

                     if((contador == 2) && (i == numero_ingresado)){
                         cout << "El numero " << numero_ingresado << " es primo" << endl;
                     }
                }
        }
    }

    return 0;
}
