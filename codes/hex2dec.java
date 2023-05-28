import java.util.Scanner;

public class hex2dec {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a hexadecimal number: ");
        String hexNumber = scanner.next();

        int decimalNumber = Integer.parseInt(hexNumber, 16);

        System.out.println("The decimal equivalent of " + hexNumber + " is " + decimalNumber);
    }
}
