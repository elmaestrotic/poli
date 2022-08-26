#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"

int main() {
    Animal *p[] ={new Perro, new Gato};

    for (int i = 0; i < 2; ++i) {
        p[i]->expresarse();
    }//fin ciclo
    return 0;
}
