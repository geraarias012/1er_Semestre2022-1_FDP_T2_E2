#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,r;
    float p;
    printf("Introduzca el valor del voltaje: ");
    scanf("%d", &v);
    if(v>100)
    {
        printf("Introduzca el valor de la resistencia: ");
        scanf("%d", &r);
        p=v*v/r;
        printf("\nEl valor de la potencia es: %f\n", p);
    }
    return 0;
}
