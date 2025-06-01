#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de múltiplos de 7 que desea ver: ";
    cin >> n;
    if (n <= 0) {
        cout << "Por favor ingrese un número mayor que cero." << endl;
        return 1;
    }
    cout << "Los primeros " << n << " múltiplos de 7 son:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << (i * 7) << " ";
    }
    cout << endl;
    return 0;
}