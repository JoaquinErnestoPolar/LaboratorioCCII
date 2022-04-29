/*
Nombre: Joaquin Ernesto Polar ESpinoza
CUI: 20190756
*/
#include<iostream>
using namespace std;
long powv2(int e,int b){
	long p=b;
	while(e>1){
	p=p*b;
	e--;
	}
	return p;
}
int main(){
	int exp, base;cout<<"Ingrese una base"<<endl;cin>>base;cout<<"Ingrese un exponente"<<endl;cin>>exp;
	cout<<powv2(exp, base)<<endl;
}
