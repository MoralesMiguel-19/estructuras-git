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
