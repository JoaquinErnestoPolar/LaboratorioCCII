/*
Nombre: Joaquin Ernesto Polar ESpinoza
CUI: 20190756
*/
#include<iostream>
using namespace std;
bool funcion1(){
	int x;
	cout<<"Ingrese un numero entre 0 y 100: ";
	cin>>x;
	bool validador=false;
	if(x>0 && x<100){
		validador=true;
		return validador;
	}
	else{
		cout<<"El numero es incorrecto"<<endl;
		funcion1();
	}
}
bool funcion2(){
	int x;
	cout<<"Ingrese un numero par: ";
	cin>>x;
	bool validador=false;
	if(x%2==0){
		validador=true;
		return validador;
	}
	else{
		cout<<"El numero es incorrecto"<<endl;
		funcion1();
	}

}
int funcion3(){
	int x;
	cout<<"Ingrese un numero: ";
	cin>>x;
	int sum=0;
	for(int i=0;i<=x;i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	return sum;
}

int main(){
	cout<<funcion1()<<endl;
	cout<<funcion2()<<endl;
	cout<<funcion3()<<endl;	
}
