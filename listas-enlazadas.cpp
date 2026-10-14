#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    while(actual != NULL){
        cout<<actual->dato<<"->";
        actual = actual->siguiente;
    }
}

