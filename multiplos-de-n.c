#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/713?quizId=8315
void multiplo(int n, int a, int b, int contador)
{

    if (contador % n == 0 || contador % n == 0)
        printf("%d\n", contador);

    else if (n > b)
    {
        printf("INEXISTENTE");
        return 0;
    }

    if (contador >= b)
        return 0;

    multiplo(n, a, b, contador + 1);
}

int main()
{
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    multiplo(n, a, b, a);

    return 0;
}