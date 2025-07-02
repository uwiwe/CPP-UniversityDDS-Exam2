#include "../node/node.cpp"
#include "../paciente/paciente.h"

class ColaPrioridad {
    private:
        Node<Paciente> *firstRojo=NULL;
        Node<Paciente> *lastRojo=NULL;
        Node<Paciente> *firstNaranja=NULL;
        Node<Paciente> *lastNaranja=NULL;
        Node<Paciente> *firstAmarillo=NULL;
        Node<Paciente> *lastAmarillo=NULL;
        Node<Paciente> *firstVerde=NULL;
        Node<Paciente> *lastVerde=NULL;

    public:
        void insertar(Paciente);
        void print();
        void imprimirCola(Node<Paciente>*);
};