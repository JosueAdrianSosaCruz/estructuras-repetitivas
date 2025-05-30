#include <iostream>
using namespace std;
int main(){
	int total;
	int num;
	int mayor=0;
	cout<<"Cantidad de numeros que va a ingresar: "<<endl;
	cin>>total;
	if (total <= 0) {
		cout << "Debe ingresar una cantidad mayor a cero." << endl;
	}
        
	for(int i=1;i<=total;i++){
		cout<<"Ingrese un numero positivo mayor que cero: "<<endl;
		cin>>num;
		 if (num <= 0) {
		 	cout << "El numero debe ser mayor que cero." << endl;
		 	i--;
		 }
		 if (num>mayor){
		 	mayor=num;
		 }
	}
	cout<<"El numero mayor positivo es: "<<mayor<<endl;
}