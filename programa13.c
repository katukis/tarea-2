#include <stdio.h>

int main() 
{
    int n, i;
    int arreglo[100];
    int suma = 0;
    printf("Cuantos elementos tendra el arreglo? (max 100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) 
    {
        printf("Tamano invalido.\n");
        return 0;
    }

    for (i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    for (i = 0; i < n; i++) 
    {
        suma += arreglo[i];
    }
    printf("Suma de los elementos: %d\n", suma);

    return 0;
}
