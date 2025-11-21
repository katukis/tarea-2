#include <stdio.h>

int main() 
{
    int suma = 0;
    int i;

    for (i = 10; i <= 50; i++) 
    {
        if (i % 2 == 0) 
        {
            suma += i;
        }
    }

    printf("Suma de los pares entre 10 y 50: %d\n", suma);

    return 0;
}
