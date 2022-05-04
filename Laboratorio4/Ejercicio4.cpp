#include <iostream>
#include <string.h>
using namespace std;
void Invertir(int n[], int c){
	int aux;
	for (int i=0; i < c; i++){
		for(int j=0; j < c; j++){
			if (n[j] > n[j+1]){
				aux = n[j];
				n[j] = n[j+1];
				n[j+1] = aux;
			}
		}
	}
	for (int i=c; i > 0; i--){
		cout << n[i] << endl;
	}
}
bool Primo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}
int main(){
	int num[100];
	int c=0;
	for(int i=1;i<101;i++){
		if(Primo(i)){
			num[c]=i;
			c++;
		}
	}
	Invertir(num,c);
}
