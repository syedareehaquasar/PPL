#include <math.h>
#include <stdio.h>

#define MAX 17

void init(int p[]);
void read(int p[]);
void print(int p[]);
void addition(int p1[], int p2[]);
void multiply(int p1[], int p2[]);
void subtract(int p1[], int p2[]);

int main()
{
    int A[3] = {4, 10, 6}, B[3] = {1, 2, 4};
    printf("First polynomial is \n");
    print(A);
    printf("Second polynomial is \n");
    print(B);
    printf("Addition polynomial is \n");
    addition(A, B);
    printf("Subtracted polynomial is \n");
    subtract(A, B);
    printf("Product polynomial is \n");
    multiply(A, B);
    return 0;
}

void print(int p[])
{
    int i;
    for (i = 2; i >= 0; i--)
    {
        printf("%d", p[i]);
        if (i != 0)
            printf("X^%d + ", i);
    }
    printf("\n");
}

void addition(int p1[], int p2[])
{
    int i;
    int p3[3];
    for (i = 0; i < 3; i++)
        p3[i] = p1[i] + p2[i];
    print(p3);
}

void subtract(int p1[], int p2[])
{
    int i;
    int p3[3];
    for (i = 0; i < 3; i++)
        p3[i] = p1[i] - p2[i];
    print(p3);
}

void multiply(int p1[], int p2[])
{
    int i, j;
    int p3[5];
    for (i = 0; i < 3; i++)
        p3[i] = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            p3[i + j] = p3[i + j] + p1[i] * p2[j];
    print(p3);
}
