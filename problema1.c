#include <stdio.h>

int main() 
{
    float a, b;
    float suma, resta, multiplicacion;

    printf("Dame el primer numero: ");
    scanf("%f", &a);
    printf("Dame el segundo numero: ");
    scanf("%f", &b);

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;

    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicacion: %.2f\n", multiplicacion);

    return 0;
}
