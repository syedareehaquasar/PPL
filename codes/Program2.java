import java.util.Scanner;

public class Program2 {
    public static void main(String[] args) {
        int m, n;
        System.out.println("Enter no. of rows:");
        Scanner sc = new Scanner(System.in);
        m = sc.nextInt();
        System.out.println("Enter no. of columns:");
        n = sc.nextInt();
        int A[][] = new int[m][n];
        System.out.println("Enter the matrix elements:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                A[i][j] = sc.nextInt();
            }
        }
        int X = 0, y = 0, min = 100, max = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (min > A[i][j]) {
                    min = A[i][j];
                    y = j;
                }
            }
            System.out.println("index of smallest element in " + i + " row is: " + y);
        }
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (max < A[i][j]) {
                    max = A[i][j];
                    X = i;
                }
            }
            System.out.println("index of largest element in " + j + " column is: " + X);
        }
    }
}
