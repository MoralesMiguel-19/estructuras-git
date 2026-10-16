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
void buscarLista(Nodo *lista, int n ){
    bool band = false;
    Nodo *actual = new Nodo();
    actual = lista;

    while((actual != NULL) && (actual->dato <= n)){
        if(actual->dato == n){
            band = true;
        }
        actual = actual->siguiente;
    }
    if(band == true){
        cout<<"Elemento"<<n<<"SI a sido encontrado en la lista\n";
    }else{
        cout<<"Elemento"<<n<<"NO a sido encontrado en lista\n";
    }
}
void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL )&&(aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if(lista==aux1){
        lista = nuevo_nodo;
    }else{
        aux2->siguiente=nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;
}

void eliminarLista(Nodo *&lista,int &n){
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}

void eliminarNodo(Nodo *&lista,int n){
    if(lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar = lista;

        while((aux_borrar != NULL) && (aux_borrar->dato != n)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        if(aux_borrar == NULL){
            cout<<"El elemento no existe";
        }
        else if(anterior == NULL){
            lista = lista->siguiente;
            delete aux_borrar;
        }
        else{
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}

