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
