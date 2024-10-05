import threading
import time
import random

def cajero(nombre_cajero, clientes, lock):
    while True:
        lock.acquire() 
        if len(clientes) == 0:
            lock.release() 
            break
        cliente = clientes.pop(0)  
        lock.release() 
 
        print(f'{nombre_cajero} está atendiendo a {cliente}')
        tiempo_atencion = random.uniform(4, 8) 
        time.sleep(tiempo_atencion)  
        print(f'{nombre_cajero} ha terminado de atender a {cliente} en {tiempo_atencion:.2f} segundos.')

clientes = ['Cliente 1', 'Cliente 2', 'Cliente 3', 'Cliente 4', 'Cliente 5', 'Cliente 6']

lock = threading.Lock()


hilo_cajero1 = threading.Thread(target=cajero, args=('Cajero 1', clientes, lock))
hilo_cajero2 = threading.Thread(target=cajero, args=('Cajero 2', clientes, lock))

hilo_cajero1.start()
hilo_cajero2.start()

hilo_cajero1.join()
hilo_cajero2.join()

print("Todos los clientes han sido atendidos.")
