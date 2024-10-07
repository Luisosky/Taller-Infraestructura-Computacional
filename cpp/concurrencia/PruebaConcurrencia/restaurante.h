#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include <iostream>
#include <thread>
#include <vector>
#include <random>
#include <chrono>
#include <semaphore>

class restaurante {
public:
    restaurante(int numCocineros, int numClientes);
    void run();

private:
    void cliente(int id);
    int numCocineros;
    int numClientes;
    std::vector<std::thread> clienteThreads;
    std::counting_semaphore<> semaphore;

};
#endif // RESTAURANTE_H