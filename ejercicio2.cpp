#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Ingrese un numero (Introducir un negativo para finalizar la accion): "<<endl;
	cin>>num;
	while (num>=0){
		cin>>num;
	}
	cout<<"Fin de la captura"<<endl;
	return 0;
}