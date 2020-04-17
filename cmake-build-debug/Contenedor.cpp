//
// Created by FF_Cesar on 3/12/20.
//

#include "Contenedor.h"
template <class T>
Contenedor<T>::Contenedor(){
this->nHeroes = 0;
arregloHeroes = new T*[nHeroes];
}
template <class T>
Contenedor<T>::~Contenedor(){
    if(arregloHeroes != NULL){
        delete[] arregloHeroes;
    }

}
template <class T>
void Contenedor<T>::agregarElemento(T* nuevoHeroe) {
    T** auxiliar = new T*[nHeroes + 1];
    for(int i=0; i<nHeroes; i++){
        auxiliar[i] = arregloHeroes[i];
    }
    auxiliar[nHeroes] = nuevoHeroe;
    nHeroes++;
    if(arregloHeroes != NULL){
        delete[] arregloHeroes;
        arregloHeroes = auxiliar;
    }

}
template <class T>
T* Contenedor<T>::getElemento(int posicion) {
    return arregloHeroes[posicion];
}