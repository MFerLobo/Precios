#include<stdio.h>

int main(void)
{
    float precio, plan1, plan2cont, plan2cuot, plan3cont, plan3cuot, plan4cuot1, plan4cuot2;

    printf("Ingrese el precio base\n");
    printf("$");
    scanf("%f", &precio);

    plan1 = precio - precio * 0.1;
    
    plan2cont = (precio + precio * 0.1) / 2;
    plan2cuot = (precio + precio * 0.1) / 2 / 2;

    plan3cont = (precio + precio * 0.15) * 0.25;
    plan3cuot = (precio + precio * 0.15) * 0.75 / 5;

    plan4cuot1 = (precio + precio * 0.25) * 0.6 / 4;
    plan4cuot2 = (precio + precio * 0.25) * 0.4 / 4;
    
    printf("El precio base es: $%f\n\n", precio);
    printf("El precio en el plan de pago 1 es: $%f al contado\n\n", plan1);
    printf("El precio en el plan de pago 2 es: $%f al  contado y 2 cuotas de $%f cada una\n\n", plan2cont, plan2cuot);
    printf("El precio en el plan de pago 3 es: $%f al contado y 5 cuotas de $%f cada una\n\n", plan3cont, plan3cuot);
    printf("El precio en el plan de pago 4 es: 4 cuotas de $%f cada una y 4 cuotas de $%f cada una\n", plan4cuot1, plan4cuot2);

    return 0;
}