// main.cpp
#include "Cliente.h"
#include "Cajero.h"

int main() {
    Cliente cliente1("Cliente 1", {2, 2, 1, 5, 2, 3});
    Cliente cliente2("Cliente 2", {1, 3, 5, 1, 1});

    Cajero cajera1("Cajera 1");
    Cajero cajera2("Cajera 2");

    // Tiempo inicial de referencia
    auto initialTime = std::chrono::system_clock::now();

    cajera1.procesarCompra(cliente1, initialTime);
    cajera2.procesarCompra(cliente2, initialTime);

    return 0;
}