#include <stdio.h>

int main()
{
    float sueldo;
    float nuevoSueldo;

    printf("Dame el sueldo actual: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000.0f)
    {
        nuevoSueldo = sueldo * 1.15f;
    } 
    else 
    {
        nuevoSueldo = sueldo * 1.12f;
    }

    printf("Sueldo con aumento: %.2f\n", nuevoSueldo);

    return 0;
}
