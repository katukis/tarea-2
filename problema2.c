#include <stdio.h>

int main() 
{
    float radio;
    float area, circunferencia;
    const float PI = 3.141592f;
    printf("Dame el radio del circulo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;
    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);
    return 0;
}
