import java.io.*;
import java.net.*;

public class ArithmeticClient {

    private static final String HOSTNAME = "localhost";
    private static final int PORT = 9;

    public static void main(String[] args) throws IOException {
        Socket socket = new Socket(HOSTNAME, PORT);

        PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
        BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

        System.out.println("Enter the operation (+, -, *, /): ");
        String operation = System.console().readLine();

        System.out.println("Enter the operands: ");
        String[] operands = System.console().readLine().split("\\s*,\\s+");

        out.println(operation);
        out.println(operands[0]);
        out.println(operands[1]);

        String resultString = in.readLine();

        if (resultString == null) {
            System.out.println("Please enter a value.");
            return;
        }

        int result = Integer.parseInt(resultString);

        System.out.println("Result: " + result);

        socket.close();
    }
}
