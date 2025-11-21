#include <stdio.h>

int main() {
    float capital;
    float tasa;  // tasa mensual en DECIMAL, por ejemplo 0.02 = 2%
    float monto;

    printf("Cantidad invertida (capital): ");
    scanf("%f", &capital);
    printf("Tasa de interes mensual (en decimal, ej. 0.02): ");
    scanf("%f", &tasa);

    monto = capital * (1 + tasa);

    printf("Monto al final del mes: %.2f\n", monto);

    return 0;
}
