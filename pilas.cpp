#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

void imprimirPila(Nodo *pila){
    Nodo *aux = pila;
    cout<<"Contenido de la pila: ";
    while(aux != NULL){
        cout<<aux->dato<<" ";
        aux = aux->siguiente;
    }
    cout<<endl;
}

void agregarPila(Nodo *&pila, char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}