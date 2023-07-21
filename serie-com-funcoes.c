#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/2046?quizId=8315
int ehPrimo(int n, int i)
{

    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return ehPrimo(n, i - 1);
        }
    }
} // parte 1

int proximoPrimoAux(int n, int proximoValor)
{

    if (ehPrimo(proximoValor, proximoValor / 2))
        return proximoValor;
    else
        return proximoPrimoAux(n, proximoValor + 1);
}

int proximoPrimo(int n)
{
    if (n == 2)
        return 3;
    else
    {
        return proximoPrimoAux(n - 1, n);
    }
} // parte 2

int fatorial(int valor)
{

    if (valor == 0 || valor == 1)
        return 1;
    else
        return valor * fatorial(valor - 1);
} // parte 3

void funcoes(int n, int cont, double total)
{

    if (cont > n)
    {
        printf("\n%.2lf\n", total);
        return;
    }

    int fatorialDividendo = fatorial(cont);
    if (cont <= 2)
    {
        printf("%d!/%d", cont, cont);
        total += fatorialDividendo / cont;
    }
    else
    {
        printf("%d!/%d", cont, proximoPrimo(cont));
        total += (double)fatorialDividendo / (double)proximoPrimo(cont);
    }
    if (cont >= 1 && cont < n)
    {
        printf(" + ");
    }

    return funcoes(n, cont + 1, total);
}

int main()
{

    int valor;
    scanf("%d", &valor);

    funcoes(valor, 1, 0);

    return 0;
}