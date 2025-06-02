#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingresa cuantos multiplos de 7 deseas ver: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor ingresa un numero positivo mayor que cero." << endl;
        return 1;
    }

    cout << "Los primeros " << n << " multiplos de 7 son:" << endl;

    for (int i = 1; i <= n; i++) {
        int multiplo = i * 7;
        cout << multiplo << " ";
        suma += multiplo;
    }

    cout << endl << "La suma de los multiplos es: " << suma << endl;

    return 0;
}