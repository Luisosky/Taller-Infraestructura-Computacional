import threading
import random
import time

# Variables globales
numero_cocineros = 3
numero_clientes = 10
semaforo = threading.Semaphore(numero_cocineros)  # Limitar a 'numero_cocineros' hilos

def cliente(id_cliente):
    print(f"Cliente {id_cliente} esta haciendo su pedido.")
    tiempo_pedido = random.randint(3, 6)  # Simular tiempo de hacer el pedido
    time.sleep(tiempo_pedido)

    print(f"Cliente {id_cliente} espera a ser atendido.")
    semaforo.acquire()  # Esperar hasta que un cocinero esté disponible

    print(f"Cliente {id_cliente} se esta preparando la comida.")
    tiempo_preparacion = random.randint(4, 7)  # Simular tiempo de preparación de comida
    time.sleep(tiempo_preparacion)

    print(f"Cliente {id_cliente} recibe su comida.")
    semaforo.release()  # Liberar el cocinero

def main():
    hilos_clientes = []

    for i in range(numero_clientes):
        hilo = threading.Thread(target=cliente, args=(i,))
        hilos_clientes.append(hilo)
        hilo.start()

    for hilo in hilos_clientes:
        hilo.join()

main()
