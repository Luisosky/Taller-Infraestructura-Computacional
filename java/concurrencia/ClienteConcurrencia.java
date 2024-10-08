import java.util.concurrent.Semaphore;
import java.util.concurrent.ThreadLocalRandom;

class ClienteConcurrencia extends Thread {
    private int idCliente;
    private Semaphore semaforo;

    public ClienteConcurrencia(int idCliente, Semaphore semaforo) {
        this.idCliente = idCliente;
        this.semaforo = semaforo;
    }

    @Override
    public void run() {
        try {
            System.out.println("Cliente " + idCliente + " está haciendo su pedido.");
            int tiempoPedido = ThreadLocalRandom.current().nextInt(3000, 6000); // Simula el tiempo para hacer el pedido
            Thread.sleep(tiempoPedido);

            System.out.println("Cliente " + idCliente + " espera a ser atendido.");
            semaforo.acquire();  // Espera a que un cocinero esté disponible

            System.out.println("Cliente " + idCliente + " se está preparando la comida.");
            int tiempoPreparacion = ThreadLocalRandom.current().nextInt(4000, 7000);  // Simula el tiempo de preparación de la comida
            Thread.sleep(tiempoPreparacion);

            System.out.println("Cliente " + idCliente + " recibe su comida.");
            semaforo.release();  // Libera un cocinero

        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
