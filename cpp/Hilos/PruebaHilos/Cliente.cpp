//
// Created by Lucho on 2/10/2024.
//
#include <iostream>
#include <vector>

class Cliente {
public:
    Cliente(const std::string& nombre, const std::vector<int>& productos)
            : nombre(nombre), productos(productos) {}

    const std::string& getNombre() const {
        return nombre;
    }

    const std::vector<int>& getProductos() const {
        return productos;
    }

private:
    std::string nombre;
    std::vector<int> productos;
};
