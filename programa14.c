#include <stdio.h>

int main() 
{
    int n, i;
    int arreglo[100];
    int buscado;
    int contador = 0;
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

    printf("Numero a buscar en el arreglo: ");
    scanf("%d", &buscado);
    for (i = 0; i < n; i++) 
    {
        if (arreglo[i] == buscado) 
        {
            contador++;
        }
    }

    printf("El numero %d aparece %d veces.\n", buscado, contador);

    return 0;
}
