/*
Nombre: Joaquin Ernesto Polar ESpinoza
CUI: 20190756
*/
#include <iostream>
#include <math.h>
using namespace std;
int Ejercicio_1(){
	int sum=0;
	for (int i=2;i<=100;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	return sum;
}
void Ejercicio_3(){
	for(int i=1;i<101;i++){
		if(i%5==0){
			cout<<i<<" ";
		}
	}
}
void Ejercicio_5(){
	int may=0;
	int n=10;
	int men;
	int sum=0;
	int med;
	cout<<"Ingresa la cantidad de numeros";
	cin>>n;
	int cadena[n];
	for(int i=0;i<n;i++){
		cin>>cadena[i];
	}
	for(int i=0;i<n;i++){
		if(cadena[i]>may){
			may=cadena[i];
		}
	}
	cout<<"El mayor es:"<<may;
	men=may;
	for(int i=0;i<n;i++){
		if(men>cadena[i]){
			men=cadena[i];
		}
	}
	cout<<"El menor es:"<<men;
	for(int i=0;i<n;i++){
		sum+=cadena[i];
	}
	med=sum/n;
	cout<<"La media es:"<<med;
}

void Ejercicio_8(){
	int n;
	cout<<"Ingresar numero";
	cin>>n;
	for(int i=0;i<=12;i++){
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}
void Ejercicio_9(){
	int n;
	cout<<"Ingresar numero";
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";		
		}
		cout<<"\n";
	}
}	
int main(){
	//cout<<Ejercicio_1();
	//Ejercicio_3();
	//Ejercicio_5();
	//Ejercicio_8();
	Ejercicio_9();
}
