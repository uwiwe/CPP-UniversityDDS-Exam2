// g++ main.cpp -o main
// ./main

#include<iostream>
#include "./cola/cola.cpp"
using namespace std;

int main() {
    ColaPrioridad cola;

    int cantidad;
    cout << "Ingresa el numero de pacientes: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        string nombre, gravedad;
        cout << "Nombre del paciente" << i+1 << ": ";
        cin >> nombre;
        cout << "Gravedad: verde/amarillo/naranja/rojo: ";
        cin >> gravedad;
        cola.insertar(Paciente(nombre, gravedad));
    }

    cola.print();

    return 0;
}