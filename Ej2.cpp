#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
	public: //atributos
	  int edad;
	  char nombre[50];
	  char ocupacion[50];
	public: //metodos
	  Persona(int,char*,char*); //constructor
	  void Pide_Datos();
	  void Mostrar_Datos();
};
//constructor
Persona::Persona(int edadd, char* nom, char* ocupa)
{
	edad = edadd;
    strcpy(nombre, nom);
    strcpy(ocupacion, ocupa);
}
void Persona::Pide_Datos(){
	cout << "Ingrese el nombre de la persona: ";
    cin.getline(nombre, 50);
	cout << "Ingrese la edad de la persona: ";
    cin >> edad;
    cin.ignore();
    cout << "Ingrese la ocupacion de la persona: ";
    cin.getline(ocupacion, 50);
}
void Persona::Mostrar_Datos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Ocupacion: "<<ocupacion<<endl;
}
int main(){
   cout << "Ingrese los datos de 2 personas:" << endl;
    Persona personas[2] = {
      Persona(0, "", ""), // Inicializar cada objeto Persona
      Persona(0, "", "")
    };
   for (int i = 0; i < 2; i++) {
   cout << "Datos de la Persona " << (i + 1) << endl;
   personas[i].Pide_Datos();
   } 
   cout << "\nDatos de las dos personas ingresadas:" << endl;
   for (int i = 0; i < 2; i++) {
   cout << "\nDatos del Empleado " << (i + 1) << ":" << endl;
   personas[i].Mostrar_Datos();
   }
   system ("pause");
   return 0;
}