#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int numeros[8];
	int clave;
	int encontro=false;
	for(int i=0;i<8;i++){
		cin>>numeros[i];
	}
	cout<<"Que numero desea buscar?: ";
	cin>>clave;
	int i=0;
	while((encontro==false) && (i<8)){
		if(numeros[i]==clave){
			encontro=true;
		}
		i++;
	}
	if(encontro==false)
		cout<<"FALSE";
	else if(encontro)
		cout<<"TRUE";
}
