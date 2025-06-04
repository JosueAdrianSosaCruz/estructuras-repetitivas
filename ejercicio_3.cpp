#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    cout << "Ingrese un numero natural N: ";
    cin >> N;
    //Mejora de validacion en los numeros naturales

    if (N <= 0) {
        cout << "Debe ingresar un numero natural mayor que cero." << endl;
    } else {
        for (int i = 1; i <= N; i++) {
            suma += i;
        }
        cout << "La suma de los primeros " << N << " numeros naturales es: " << suma << endl;
    }

    return 0;
}