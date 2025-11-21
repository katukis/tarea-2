#include <stdio.h>

int main() 
{
    int N;
    int i;
    long long producto = 1;

    printf("Dame el valor de N: ");
    scanf("%d", &N);

    if (N < 1) 
    {
        printf("N debe ser positivo.\n");
    } 
    else 
    {
        for (i = 1; i <= N; i++) 
        {
            producto *= i;
        }
        printf("Producto de los %d primeros naturales: %lld\n", N, producto);
    }

    return 0;
}
