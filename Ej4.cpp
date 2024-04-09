#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private: 
	string nombre;
	int edad;
	public:
		Persona(string, int);//constructor
		void PedirDatos();
		void MostrarDatos();
};
class Estudiante: public Persona{
	private:
		int numEstudiante;
		float promNotas;
	public:
		Estudiante(string, int, int, float);//constructor de la clase Estudiante
		void PedirDatos1();
		void MostrarDatos1();
};
//constructor de la clase Persona(clase padre)
Persona::Persona(string nom,int edadd){
	nombre=nom;
	edad=edadd;
}
//constructor de la clase Estudiante (clase heredada)
Estudiante::Estudiante(string nom,int edadd, int num, float prom):Persona(nom, edadd){
	numEstudiante = num;
	promNotas= prom;
}
void Persona::PedirDatos(){
	cout << "Ingrese el nombre de la Persona: ";
    getline(cin,nombre);
    cout << "Ingrese la edad de la Persona: ";
    cin >> edad;
    cin.ignore();
}
void Persona::MostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
void Estudiante::PedirDatos1(){
	PedirDatos();
	cout << "Ingrese el numero del estudiante: ";
    cin >> numEstudiante;
    cin.ignore();
    cout << "Ingrese el promedio del estudiante: ";
    cin >> promNotas;
    cin.ignore();
}
void Estudiante::MostrarDatos1(){
	MostrarDatos();
	cout<<"Numero de Estudiante: "<<numEstudiante<<endl;
	cout<<"Promedio de Notas: "<<promNotas<<endl;
}
int main(){
	Estudiante estudiante("",0,0,0);
	estudiante.PedirDatos1();
	estudiante.MostrarDatos1();
	return 0;
}