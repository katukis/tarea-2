#include <stdio.h>

int main() {
    float dolares;
    float pesos;
    const float TIPO_CAMBIO = 11.96f;

    printf("Cantidad en dolares: ");
    scanf("%f", &dolares);

    pesos = dolares * TIPO_CAMBIO;

    printf("Equivalente en pesos: %.2f\n", pesos);

    return 0;
}
