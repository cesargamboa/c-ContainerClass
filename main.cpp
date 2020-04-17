#include <iostream>
#include "Heroes.h"
#include "./cmake-build-debug/Contenedor.h"

int main() {
    Contenedor<Heroes> * arrayDeHeroes =  new Contenedor<Heroes>();
    Heroes * hero = new Heroes("Cesar");
    Heroes * hero2 = new Heroes("Isamara");
//    std::cout << hero->getName() << std::endl;
arrayDeHeroes->agregarElemento(hero);
    arrayDeHeroes->agregarElemento(hero2);

    std::cout << arrayDeHeroes->getElemento(0)->getName() << std::endl;
    arrayDeHeroes->getElemento(0)->setName("Franco");
    std::cout << arrayDeHeroes->getElemento(0)->getName() << std::endl;

    std::cout << arrayDeHeroes->getElemento(1)->getName() << std::endl;
    arrayDeHeroes->getElemento(1)->setName("Terrance");
    std::cout << arrayDeHeroes->getElemento(1)->getName() << std::endl;

    return 0;
}
