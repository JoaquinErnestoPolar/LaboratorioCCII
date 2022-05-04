#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int numeros[5][3];
	int sum=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cin>>numeros[i][j];
		}
	}
	for(int i=0;i<5;i++){
		cout<<"\n";
		for(int j=0;j<3;j++){
			cout<<numeros[i][j]<<" ";
		}
	}
	for(int i=0;i<5;i++){
		cout<<"\n";
		for(int j=0;j<3;j++){
			if(i%2==0)
				sum+=numeros[i][j];
		}
	}
	cout<<sum;
}
