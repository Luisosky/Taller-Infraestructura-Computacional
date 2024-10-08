# Ejemplos de Hilos y Concurrencia en Java, Python y C++

Este repositorio contiene implementaciones de ejemplos que demuestran el uso de hilos y concurrencia en tres lenguajes de programación: **Java**, **Python** y **C++**. Estos ejemplos son prácticos y están orientados a situaciones comunes en un supermercado y un restaurante. 

## Descripción General

### Implementación de Hilos
En el contexto de un supermercado, los hilos se utilizan para simular la operación de cobro de productos por parte de dos cajeras que atienden a los clientes. Cada cliente llega con un carrito de compras y se dirige a una de las dos cajas disponibles. El uso de hilos permite que ambas cajeras procesen los pagos de manera simultánea, garantizando un procesamiento paralelo de las compras. Además, es importante que los clientes sean atendidos en el orden en que llegaron, lo que introduce la necesidad de un mecanismo de sincronización o control de flujo entre los hilos.

### Problema de Concurrencia
En el caso del restaurante, se modela una situación en la que múltiples clientes realizan pedidos de platillos a los cocineros. Dado que hay un número limitado de cocineros, los pedidos deben ser gestionados de manera eficiente para garantizar que los clientes reciban su comida a tiempo, mientras los cocineros trabajan de manera concurrente en diferentes pedidos. El objetivo es maximizar el uso de los recursos disponibles (los cocineros) y minimizar el tiempo de espera de los clientes.

## Lenguajes Utilizados

### Java
En la implementación en Java, se utiliza la clase `Thread` y las estructuras de sincronización proporcionadas por el lenguaje, como `synchronized` y `Lock`, para garantizar que los hilos operen de manera concurrente y en orden. Además, se hace uso de estructuras de datos como colas para gestionar la llegada de los clientes y los pedidos.

### Python
En Python, se utiliza la librería `threading` para la creación y gestión de hilos. Los bloqueos (`Locks`) y semáforos se utilizan para asegurar que las operaciones de concurrencia y sincronización se manejen correctamente, permitiendo que los clientes y cocineros trabajen de forma paralela sin interferencias.

### C++
En C++, se utiliza la librería estándar (`<thread>`, `<mutex>`, `<condition_variable>`) para implementar tanto los hilos como los mecanismos de sincronización entre ellos. La clase `std::thread` es la base para crear hilos, y los bloqueos (`mutex`) y variables de condición son fundamentales para controlar el acceso a los recursos compartidos, como los cocineros y cajeras.

## Cómo Ejecutar los Ejemplos

### Java
Para ejecutar los ejemplos en Java debes tener las 3 clases en un mismo directorio y ejecutar la clase de Restaurante y Supermercado

### Python
Solo hay una clase, por lo tanto, solo ejecutas la clase

### C++
Todas las clases deben estar en un mismo directorio y posteriormente ejecutar el apartado de main
