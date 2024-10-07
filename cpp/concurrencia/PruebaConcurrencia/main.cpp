#include <iostream>

#include "restaurante.h"

int main() {
    int numCocineros= 3;
    int numClientes= 10;
    restaurante restaurante(numCocineros,numClientes);
    restaurante.run();
    return 0;
}
