#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
void Escribir();
void LeerMostrar();

int main() {
	Escribir();
	LeerMostrar();
	return 0;
}
void Escribir(){
    // Abrir un archivo en modo de escritura
    ofstream archivito("exercise1.txt", ios::out | ios::binary);
   if (archivito.is_open()) {
        string nombre;
        int edad;
        cout << "Ingrese el nombre: ";
        getline(cin, nombre);
        cout << "Ingrese la edad: ";
        cin >> edad;
        cin.ignore(); // Ignorar el salto de línea después de leer la edad

        archivito << nombre << "," << edad << endl; // Escribir los datos en el archivo
        archivito.close(); // Cerrar el archivo
        cout << "Datos guardados en el archivo." << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}
void LeerMostrar(){
	ifstream archivito("exercise1.txt"); // Abrir el archivo en modo de lectura
    if (archivito.is_open()) {
        string linea;
        while (getline(archivito, linea)) {
            size_t posicionComa = linea.find(",");
            string nombre = linea.substr(0, posicionComa);
            int edad = stoi(linea.substr(posicionComa + 1));
            cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
        }
        archivito.close(); // Cerrar el archivo
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}