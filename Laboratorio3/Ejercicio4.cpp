/*
Nombre: Joaquin Ernesto Polar ESpinoza
CUI: 20190756
*/
#include<iostream>
using namespace std;
bool Primo(int num) {
	
	if (num == 0 || num == 1 || num == 4) 
		return false;
	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0) 
			return false;
  	}
  	return true;
}
void primo_1(int x){
	for(int i=1;i<x;i++){
		if(Primo(i)){
			cout<<i<<" ";
		}
	}
}
int main(){
	int x;
	cout<<"Ingrese un numero: ";
	cin>>x;
	primo_1(x);
	
}
