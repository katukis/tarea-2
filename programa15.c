#include <stdio.h>

int main() 
{
    int n, i;
    int arreglo[100];
    int positivos = 0, negativos = 0, nulos = 0;
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
        if (arreglo[i] > 0) 
        {
            positivos++;
        } else if (arreglo[i] < 0) 
        {
            negativos++;
        } else 
        {
            nulos++;
        }
    }
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
