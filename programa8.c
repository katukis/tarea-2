#include <stdio.h>

int main() 
{
    int a, b;

    printf("Dame el primer entero: ");
    scanf("%d", &a);
    printf("Dame el segundo entero: ");
    scanf("%d", &b);

    if (a == 0 || b == 0)
    {
        printf("No se puede determinar divisor si alguno es cero (evitar division entre cero).\n");
    } else if (a % b == 0)
    {
        printf("%d es divisor de %d\n", b, a);
    } else if (b % a == 0)
    {
        printf("%d es divisor de %d\n", a, b);
    } 
    else 
    {
        printf("Ninguno es divisor exacto del otro.\n");
    }

    return 0;
}
