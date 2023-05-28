import java.util.Scanner;

class test {
    public static int[] multiply(int A[], int B[], int m, int n) {
        int[] prod = new int[m + n - 1];
        for (int i = 0; i < m + n - 1; i++) {
            prod[i] = 0;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                prod[i + j] += A[i] * B[j];
            }
        }
        return prod;
    }

    public static void multiply(int A[], int B[], int n) {
        int[] prod = new int[2 * n - 1];
        for (int i = 0; i < prod.length; i++) {
            prod[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                prod[i + j] += A[i] * B[j];
            }
        }
        printPoly(prod, n);
    }

    public static void addition(int A[], int B[], int n) {
        int[] add = new int[n];
        for (int i = 0; i < add.length; i++) {
            add[i] = A[i] + B[i];
        }
        printPoly(add, n);
    }

    public static void subtract(int A[], int B[], int n) {
        int[] sub = new int[n];
        for (int i = 0; i < sub.length; i++) {
            sub[i] = A[i] - B[i];
        }
        printPoly(sub, n);
    }

    static void printPoly(int poly[], int n) {
        for (int i = n - 1; i >= 0; i--) {
            System.out.print(poly[i]);
            if (i != 0) {
                System.out.print("x^" + i + " + ");
                continue;
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int A[] = { 4, 10, 6 };
        int B[] = { 1, 2, 4 };
        int n = A.length;
        System.out.println("First polynomial is ");
        printPoly(A, n);
        System.out.println("Second polynomial is ");
        printPoly(B, n);
        System.out.println("Addition polynomial is \t");
        addition(A, B, n);
        System.out.println("Subtracted polynomial is \t");
        subtract(A, B, n);
        System.out.println("Product polynomial is \t");
        multiply(A, B, n);
    }
}
