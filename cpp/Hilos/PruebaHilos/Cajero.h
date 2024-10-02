// Cajero.h
#ifndef CAJERO_H
#define CAJERO_H

#include "Cliente.h"
#include <iostream>
#include <thread>
#include <chrono>

class Cajero {
public:
    Cajero(const std::string& nombre) : nombre(nombre) {}

    void procesarCompra(const Cliente& cliente, const std::chrono::time_point<std::chrono::system_clock>& initialTime) {
        std::cout << "La cajera " << nombre << " COMIENZA A PROCESAR LA COMPRA DEL CLIENTE "
                  << cliente.getNombre() << " EN EL TIEMPO: "
                  << obtenerSegundos(initialTime) << "seg\n";

        const std::vector<int>& productos = cliente.getProductos();
        for (size_t i = 0; i < productos.size(); ++i) {
            esperarXsegundos(productos[i]);
            std::cout << "Procesado el producto " << (i + 1) << " -> Tiempo: "
                      << obtenerSegundos(initialTime) << "seg\n";
        }

        std::cout << "La cajera " << nombre << " HA TERMINADO DE PROCESAR "
                  << cliente.getNombre() << " EN EL TIEMPO: "
                  << obtenerSegundos(initialTime) << "seg\n";
    }

private:
    std::string nombre;

    void esperarXsegundos(int segundos) {
        std::this_thread::sleep_for(std::chrono::seconds(segundos));
    }


    long obtenerSegundos(const std::chrono::time_point<std::chrono::system_clock>& initialTime) {
        auto tiempoActual = std::chrono::system_clock::now();
        auto duracion = std::chrono::duration_cast<std::chrono::seconds>(tiempoActual - initialTime);
        return duracion.count();
    }
};
#endif // CAJERO_H