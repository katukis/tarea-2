#include <stdio.h>

int main() {
    float radio;
    float area, circunferencia;
    const float PI = 3.141592f;

    // Entrada
    printf("Dame el radio del circulo: ");
    scanf("%f", &radio);

    // Proceso
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    // Salida
    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);

    return 0;
}
