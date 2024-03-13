/*
    7. Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um
    valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A
    seguir:

    a) Se i=1 escrever os três valores a, b, c em ordem crescente.
    b) Se i=2 escrever os três valores a, b, c em ordem decrescente.
    c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique
    dentre os dois.

*/
#include <stdio.h>

int main()
{
    short i = 0;
    float a, b, c = 0;

    printf("De o valor de i: ");
    scanf("%hd", &i);

    printf("De os tres valores reais: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (i == 1)
    {
        if (a >= b && a >= c)
        {
            if (b >= c)
            {
                printf("%g, %g, %g", c, b, a);
            }
            else
            {
                printf("%g, %g, %g", b, c, a);
            }
        }
        else if (b >= a && b >= c)
        {
            if (a >= c)
            {
                printf("%g, %g, %g", c, a, b);
            }
            else
            {
                printf("%g, %g, %g", a, c, b);
            }
        }
        else
        {
            if (a >= b)
            {
                printf("%g, %g, %g", b, a, c);
            }
            else
            {
                printf("%g, %g, %g", a, b, c);
            }
        }
    }
    else if (i == 2)
    {
        if (a >= b && a >= c)
        {
            if (b >= c)
            {
                printf("%g, %g, %g", a, b, c);
            }
            else
            {
                printf("%g, %g, %g", a, c, b);
            }
        }
        else if (b >= a && b >= c)
        {
            if (a >= c)
            {
                printf("%g, %g, %g", b, a, c);
            }
            else
            {
                printf("%g, %g, %g", b, c, a);
            }
        }
        else
        {
            if (a >= b)
            {
                printf("%g, %g, %g", c, a, b);
            }
            else
            {
                printf("%g, %g, %g", c, b, a);
            }
        }
    }
    else if (i == 3)
    {
        if (a >= b && a >= c)
        {
            printf("%g, %g, %g", b, a, c);
        }
        else if (b >= a && b >= c)
        {
            printf("%g, %g, %g", a, b, c);
        }
        else
        {
            printf("%g, %g, %g", a, c, b);
        }
    }

    return 0;
}