import java.io.*;
import java.net.*;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class ArithmeticServer {

    private static final int PORT = 9;

    public static void main(String[] args) throws IOException {
        ExecutorService executorService = Executors.newFixedThreadPool(10);

        ServerSocket serverSocket = new ServerSocket(PORT);
        while (true) {
            Socket clientSocket = serverSocket.accept();
            executorService.submit(new ArithmeticWorker(clientSocket));
        }
    }

    private static class ArithmeticWorker implements Runnable {

        private Socket clientSocket;

        public ArithmeticWorker(Socket clientSocket) {
            this.clientSocket = clientSocket;
        }

        @Override
        public void run() {
            try {
                BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);

                String operation = in.readLine();
                String[] operands = in.readLine().split(" ");

                int operand1 = Integer.parseInt(operands[0]);
                int operand2 = Integer.parseInt(operands[1]);

                int result = 0;

                if (operation.equals("+")) {
                    result = operand1 + operand2;
                } else if (operation.equals("-")) {
                    result = operand1 - operand2;
                } else if (operation.equals("*")) {
                    result = operand1 * operand2;
                } else if (operation.equals("/")) {
                    result = operand1 / operand2;
                }

                out.println(result);
            } catch (IOException e) {
                System.err.println(e.getMessage());
            } finally {
                try {
                    clientSocket.close();
                } catch (IOException e) {
                    System.err.println(e.getMessage());
                }
            }
        }
    }
}
