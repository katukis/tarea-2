#include <stdio.h>

int main() 
{
    int i;
    int num;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    for (i = 1; i <= 100; i++) 
    {
        printf("Numero %d: ", i);
        scanf("%d", &num);

        if (num > 0) 
        {
            positivos++;
        } 
        else if (num < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
