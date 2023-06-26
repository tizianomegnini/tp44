#include <iostream>
using namespace std;
int SacarPromedio(int n1, int n2, int n3);
int main (){
	int n1, n2, n3;
	cout<<"Ingrese el numero 1: ";
	cin>>n1;
	cout<<"Ingrese el numero 2: ";
	cin>>n2;
	cout<<"Ingrese el numero 3: ";
	cin>>n3;
	cout<<"El promedio es: "<<SacarPromedio(n1, n2, n3)<<endl;
	return 0;
}
int SacarPromedio(int n1, int n2, int n3){
	int prom;
	prom=(n1+n2+n3)/3;
	return prom;
}
