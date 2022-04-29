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
void bisiesto(){
	int year;
	cout<<"Ingrese un año"<<endl;
	cin>>year;
	
	if(year%4==0 && year%100==0 && year%400==0){
		cout<<" es bisiesto";
	}
	else{
		cout<<" no es bisiesto";
	}
}
int main(){
	int exp, base;cout<<"Ingrese una base"<<endl;cin>>base;cout<<"Ingrese un exponente"<<endl;cin>>exp;
	cout<<powv2(exp, base)<<endl;
	bisiesto();
}
