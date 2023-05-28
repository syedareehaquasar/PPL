import java.io.*;
import java.net.*;
import java.util.*;

class Client {
    public static void main(String[] args) {
        try (Socket socket = new Socket("localhost", 1234)) {
            PrintWriter out = new PrintWriter(
                    socket.getOutputStream(), true);
            BufferedReader in = new BufferedReader(new InputStreamReader(
                    socket.getInputStream()));
            Scanner sc = new Scanner(System.in);
            String line = null;
            while (!"exit".equalsIgnoreCase(line)) {
                System.out.println("\nEnter Numbers: ");
                String a1, a2;
                a1 = sc.nextLine();
                a2 = sc.nextLine();
                System.out.println("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division");
                String ch;
                System.out.println("\nEnter Choice: ");
                ch = sc.nextLine();
                line = ch + ' ' + a1 + ' ' + a2;
                out.println(line);
                out.flush();
                System.out.println("Server replied Result is: " + in.readLine());
            }
            sc.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
