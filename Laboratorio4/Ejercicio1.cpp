#include "iostream"
#include "string"
using namespace std;

int main()
{
	string nombre[3];
	string apellido[3];
	string edad[3];
	string DNI[3];
	cout << "Por favor ingrese la siguiente información de las Personas: \n";
	for(int i = 0; i < 3; i++)
	{
		cout << "\n******* Persona " << i + 1 << "********:\n";
		cout << "Nombre: ";
		getline(cin,nombre[i]);
		cout << "Apellido: ";
		getline(cin,apellido[i]);
		cout << "Edad: ";
		getline(cin,edad[i]);
		cout << "DNI: ";
		getline(cin,DNI[i]);
		cout << "\n******* Datos Persona " << i + 1 << "********:\n";
		
		cout<<nombre[i]<<endl;
		cout<<apellido[i]<<endl;
		cout<<edad[i]<<endl;
		cout<<DNI[i]<<endl;
	}
}
