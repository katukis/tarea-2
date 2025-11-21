#include <stdio.h>
int main() 
{
    int pares[100];
    int i;
    int valor = 2;
    for (i = 0; i < 100; i++) 
    {
        pares[i] = valor;
        valor += 2;
    }
    printf("Primeros 100 numeros pares:\n");
    for (i = 0; i < 100; i++) 
    {
        printf("%d ", pares[i]);
    }
    printf("\n");
    return 0;
}
