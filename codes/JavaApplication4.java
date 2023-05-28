import java.util.LinkedList;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;

public class JavaApplication4 {
    public static void main(String[] args) throws InterruptedException {
        final BlockingQueue<Integer> queue = new LinkedBlockingQueue<>();
        final PC pc = new PC();
        Thread t1 = new Thread(new Runnable() {
            public void run() {
                try {
                    pc.produce(queue);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });
        Thread t2 = new Thread(new Runnable() {
            public void run() {
                try {
                    pc.consume(queue);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });
        t1.start();
        t2.start();
        t1.join();
        t2.join();
    }

    public static class PC {
        public void produce(BlockingQueue<Integer> queue) throws InterruptedException {
            int value = 0;
            while (true) {
                queue.add(value++);
                System.out.println("Producer produced-" + value);
                Thread.sleep(1000);
            }
        }

        public void consume(BlockingQueue<Integer> queue) throws InterruptedException {
            while (true) {
                int val = queue.take();
                System.out.println("Consumer consumed-" + val);
                Thread.sleep(1000);
            }
        }
    }
}
