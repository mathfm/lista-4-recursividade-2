#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/492?quizId=8315
void totalCapsulas(int quantiaCaixa, char tamanhoCaixa, int cont, int totalCaixas)
{

    if (tamanhoCaixa == 'p' || tamanhoCaixa == 'P')
        totalCaixas += quantiaCaixa * 10;

    if (tamanhoCaixa == 'g' || tamanhoCaixa == 'G')
        totalCaixas += quantiaCaixa * 16;

    if (cont > 0 && cont <= 7)
    {

        scanf("%d %c", &quantiaCaixa, &tamanhoCaixa);

        return totalCapsulas(quantiaCaixa, tamanhoCaixa, cont - 1, totalCaixas);
    }
    else
    {
        printf("%d\n%d\n", totalCaixas, (totalCaixas / 7) * 2);
        return;
    }
}
/*
    totalP = 10 + 20 + 10 + 10 = 50
    totalG = 16 + 16 + 16 = 48
    1 p = 10
    1 G = 16
    2 p = 20
    1 g = 16
    1 P = 10
    1 G = 16
    1 P = 10

*/

int main()
{

    totalCapsulas(0, 0, 7, 0);

    return 0;
}