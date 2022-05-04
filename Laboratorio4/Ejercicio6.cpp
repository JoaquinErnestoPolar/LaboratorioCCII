#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int numeros[3][3];
	int sumafila=0;
	int n;
	int mayorsum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>numeros[i][j];
		}
	}
	for(int i=0;i<3;i++){
		cout<<"\n";
		for(int j=0;j<3;j++){
			cout<<numeros[i][j]<<" ";
		}
	}
	for (int i=0;i<3;i++) {
        sumafila=0;
        n=i+1;
        for (int j=0;j<3;j++) {
            sumafila+=numeros[i][j];
            if (sumafila > mayorsum) {
                mayorsum=sumafila;
            }
        }
    }
	cout<<"la fila con suma mayor es la: "<<mayorsum;
}
