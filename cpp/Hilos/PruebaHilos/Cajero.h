// Cajero.h
#ifndef CAJERO_H
#define CAJERO_H

#include "Cliente.h"
#include <iostream>
#include <thread>
#include <chrono>

class Cajero {
public:
    explicit Cajero(const std::string& nombre);

    void procesarCompra(const Cliente& cliente, const std::chrono::time_point<std::chrono::system_clock>& initialTime);


private:
    std::string nombre;

    static void esperarXsegundos(int segundos);
    static long obtenerSegundos(const std::chrono::time_point<std::chrono::system_clock>& initialTime);
};
#endif // CAJERO_H