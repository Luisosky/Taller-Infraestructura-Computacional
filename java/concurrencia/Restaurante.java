import java.util.concurrent.Semaphore;

public class Restaurante {
    public static void main(String[] args) {
        int numeroCocineros = 3;  // Número de cocineros disponibles
        int numeroClientes = 10;  // Número total de clientes

        Semaphore semaforo = new Semaphore(numeroCocineros);

        for (int i = 0; i < numeroClientes; i++) {
            ClienteConcurrencia cliente = new ClienteConcurrencia(i, semaforo);
            cliente.start();  // Iniciar el hilo del cliente
        }
    }
}