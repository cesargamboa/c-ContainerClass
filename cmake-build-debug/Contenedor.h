//
// Created by FF_Cesar on 3/12/20.
//
#include "../Heroes.h"
#ifndef PRACTICAARRAYS_CONTENEDOR_H
#define PRACTICAARRAYS_CONTENEDOR_H
#include <iostream>
//using namespace std;
//
//template <class T>
//T GetMax (T a, T b) {
//    return (a>b?a:b);
//}
//
//int main () {
//    int i=5, j=6, k;
//    long l=10, m=5, n;
//    k=GetMax(i,j);
//    n=GetMax(l,m);
//    cout << k << endl;
//    cout << n << endl;
//    return 0;
//}

template <class T>
class Contenedor {

private:
    T** arregloHeroes;
    int nHeroes;
public:
    void agregarElemento(T*);
    T* getElemento(int);
    Contenedor();
    ~Contenedor();
};


#endif //PRACTICAARRAYS_CONTENEDOR_H
