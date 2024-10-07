//
// Created by Admin on 7/10/2024.
//
#include "restaurante.h"

restaurante::restaurante(int numCocineros, int numClientes) : numCocineros(numCocineros), numClientes(numClientes), semaphore(numCocineros){}

void restaurante::cliente(int id) {
    std::cout << "Cliente " << id << " haciendo un pedido " << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(rand() % 3 +1));

    std::cout << "Cliente " << id << " esperando para ser servido " << std::endl;
    semaphore.acquire();

    std::cout << "Cliente " << id << " se esta preparando la comida " << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(rand() %4 +2));

    std::cout << "Cliente " << id << " recibio su comida " << std::endl;
    semaphore.release();
}

void restaurante::run() {
    for (int i =0; i<numClientes; ++i) {
        clienteThreads.emplace_back(&restaurante::cliente, this, i);
    }
    for (auto& thread : clienteThreads) {
        thread.join();
    }
}

