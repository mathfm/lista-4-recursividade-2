#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/342?quizId=8315

void divisivel(int valor, int divisoresEncontrados, int contador)
{
    if (contador > valor)
    {
        if (divisoresEncontrados > 0)
            printf("%d\n", divisoresEncontrados);

        else
            printf("O numero nao possui divisores multiplos de 3!\n");

        return;
    }
    if (valor % contador == 0 && contador % 3 == 0)
        divisoresEncontrados++;

    return divisivel(valor, divisoresEncontrados, contador + 1);
}

int main()
{
    int valor;
    scanf("%d", &valor);
    divisivel(valor, 0, 1);
    return 0;
}
