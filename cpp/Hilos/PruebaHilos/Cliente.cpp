//
// Created by Lucho on 2/10/2024.
//
#include "Cliente.h"

Cliente::Cliente(const std::string& nombre, const std::vector<int>& productos)
        : nombre(nombre), productos(productos) {}

const std::string& Cliente::getNombre() const {
    return nombre;
}

const std::vector<int>& Cliente::getProductos() const {
    return productos;
}
