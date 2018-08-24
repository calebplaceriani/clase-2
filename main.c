#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,max,min;
    float acumulador;
    float numero;
    float promedio;
    acumulador=0;

    for(i=0;i<10;i++)
    {

        printf("Ingrese el numero\n");
        scanf("%f", &numero);
        acumulador+=numero;
        if(i==0)
        {
            max=numero;
            min=numero;
        }

        else if(numero > max)
        {
            max=numero;
        }
        else if(numero < min)
        {
            min=numero;
        }
    }
    promedio = acumulador/i;
    printf("EL MAXIMO ES: %d\nY EL MINIMO ES: %d\nEL dddPROMEDIO ES: %.2f",max,min,promedio);
    return 0;
}
