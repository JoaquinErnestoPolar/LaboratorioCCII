/*
Nombre: Joaquin Ernesto Polar ESpinoza
CUI: 20190756
*/
#include<iostream>
using namespace std;
void bisiesto(){
	int year;
	cout<<"Ingrese un año"<<endl;
	cin>>year;
	
	if(year%4==0 && year%100!=0 || year%400==0){
		cout<<" es bisiesto";
	}
	else{
		cout<<" no es bisiesto";
	}
}
int main(){
	bisiesto();
}
