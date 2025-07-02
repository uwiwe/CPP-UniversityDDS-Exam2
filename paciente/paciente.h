#include <string>
using namespace std;

class Paciente {
private:
    string nombre;
    string gravedad;
public:
    Paciente() { // constructor vacio para cuando se inicialice sin parametros
        this->nombre = "";
        this->gravedad = "";
    }
    Paciente(string nombre, string gravedad) {
        this->nombre = nombre;
        this->gravedad = gravedad;
    }
    string getNombre() {
        return this->nombre;
    }
    string getGravedad() {
        return this->gravedad;
    }
};