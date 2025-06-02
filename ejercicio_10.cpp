#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "El numero no es primo." << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                contador++;
            }
        }

        if (contador == 2) {
            cout << "El numero es primo." << endl;
        } else {
            cout << "El numero no es primo." << endl;
        }
    }

    return 0;
}