#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre1, nombre2, nombre3; // Declaramos las variables para los nombres

    // Pedimos el ingreso de los tres nombres y los guardamos en las variables respectivas
    cout << "Ingrese el primer nombre: ";
    getline(cin, nombre1);
    cout << "Ingrese el segundo nombre: ";
    getline(cin, nombre2);
    cout << "Ingrese el tercer nombre: ";
    getline(cin, nombre3);

    // Empezamos con las condicionales para ordenar los nombres
    if (nombre1 < nombre2 && nombre2 < nombre3) {
        // Si nombre1 < nombre2 < nombre3
        if (nombre2 < nombre3)
            cout << "El orden correcto es (ascendente): " << nombre1 << ", " << nombre2 << ", " << nombre3 << endl;
        else
            cout << "El orden correcto es (ascendente): " << nombre1 << ", " << nombre3 << ", " << nombre2 << endl;
    } else if (nombre2 < nombre1 && nombre2 < nombre3) {
        // Si nombre2 < nombre1 y nombre2 < nombre3
        if (nombre1 < nombre3)
            cout << "El orden correcto es (ascendente): " << nombre2 << ", " << nombre1 << ", " << nombre3 << endl;
        else
            cout << "El orden correcto es (ascendente): " << nombre2 << ", " << nombre3 << ", " << nombre1 << endl;
    } else if (nombre3 < nombre1 && nombre3 < nombre2) {
        // Si nombre3 < nombre1 y nombre3 < nombre2
        if (nombre1 < nombre2)
            cout << "El orden correcto es (ascendente): " << nombre3 << ", " << nombre1 << ", " << nombre2 << endl;
        else
            cout << "El orden correcto es (ascendente): " << nombre3 << ", " << nombre2 << ", " << nombre1 << endl;
    }

    return 0;
}



/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Función para ordenar la lista de nombres utilizando el algoritmo de burbuja
void ordenarPorBurbuja(vector<string>& nombres) {
    int n = nombres.size();
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nombres[j] > nombres[j + 1]) {
                // Intercambiar los nombres si están en el orden incorrecto
                string temp = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Crear una lista de nombres de estudiantes
    vector<string> nombres = {"Stephanie", "María", "Pedro", "Julieta", "Carlota", "Sofía"};

    // Ordenar la lista de nombres utilizando el algoritmo de burbuja
    ordenarPorBurbuja(nombres);

    // Mostrar los nombres ordenados en pantalla
    cout << "Nombres ordenados:" << endl;
    for (const auto& nombre : nombres) {
        cout << nombre << endl;
    }
    return 0;
}
*/