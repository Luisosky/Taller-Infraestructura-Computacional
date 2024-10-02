// Cliente.h
#ifndef CLIENTE_H
#define CLIENTE_H

#include <vector>
#include <string>

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

#endif // CLIENTE_H