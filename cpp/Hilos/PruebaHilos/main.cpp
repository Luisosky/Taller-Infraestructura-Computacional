// main.cpp
#include "Cliente.h"
#include "Cajero.h"

int main() {
    // Tiempo inicial de referencia
    auto initialTime = std::chrono::system_clock::now();

    Cliente cliente1("Cliente 1", {2, 2, 1, 5, 2, 3});
    Cliente cliente2("Cliente 2", {1, 3, 5, 1, 1});

    Cajero cajera1("Cajera 1");
    Cajero cajera2("Cajera 2");


    std::thread t1(&Cajero::procesarCompra, &cajera1, std::ref(cliente1), initialTime);
    std::thread t2(&Cajero::procesarCompra, &cajera2, std::ref(cliente2), initialTime);

    t1.join();
    t2.join();

    return 0;
}