#include<iostream>
#include "./cola.h"
using namespace std;

void ColaPrioridad::insertar(Paciente p) {
    Node<Paciente> *nuevo = new Node<Paciente>(p, NULL);

    if (p.getGravedad()=="rojo") {
        if(firstRojo==NULL) {
            firstRojo = nuevo;
            lastRojo = nuevo;
        } else {
            lastRojo->setNextNode(nuevo);
            lastRojo = nuevo;
        }
    } else if (p.getGravedad()=="naranja") {
        if(firstNaranja==NULL) {
            firstNaranja = nuevo;
            lastNaranja = nuevo;
        } else {
            lastNaranja->setNextNode(nuevo);
            lastNaranja = nuevo;
        }
    } else if (p.getGravedad()=="amarillo") {
        if(firstAmarillo==NULL) {
            firstAmarillo = nuevo;
            lastAmarillo = nuevo;
        } else {
            lastAmarillo->setNextNode(nuevo);
            lastAmarillo = nuevo;
        }
    } else if (p.getGravedad()=="verde") {
        if(firstVerde==NULL) {
            firstVerde = nuevo;
            lastVerde = nuevo;
        } else {
            lastVerde->setNextNode(nuevo);
            lastVerde = nuevo;
        }
    }
}

void ColaPrioridad::print() {
    cout << "\nOrden de atencion:" << endl;
    imprimirCola(firstRojo);
    imprimirCola(firstNaranja);
    imprimirCola(firstAmarillo);
    imprimirCola(firstVerde);
}

void ColaPrioridad::imprimirCola(Node<Paciente>* nodo) {
    while (nodo != NULL) {
        cout << nodo->getData().getNombre() << "," << nodo->getData().getGravedad() << endl;
        nodo = nodo->getNextNode();
    }
}