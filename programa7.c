#include <stdio.h>

int main() 
{
    float distanciaIda;
    int diasEstancia;
    float distanciaTotal;
    float precioSinDescuento;
    float precioFinal;
    const float PRECIO_KM = 0.23f;

    printf("Distancia de ida (km): ");
    scanf("%f", &distanciaIda);
    printf("Dias de estancia: ");
    scanf("%d", &diasEstancia);

    distanciaTotal = 2 * distanciaIda;
    precioSinDescuento = distanciaTotal * PRECIO_KM;

    if (diasEstancia > 7 && distanciaTotal > 800.0f) {
        precioFinal = precioSinDescuento * 0.70f;
    }
    else 
    {
        precioFinal = precioSinDescuento;
    }

    printf("Precio del ticket ida y vuelta: %.2f\n", precioFinal);

    return 0;
}
