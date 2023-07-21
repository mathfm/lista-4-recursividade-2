#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// quest�o e um numero triangular?
// https://thehuxley.com/problem/2077?quizId=8315
int triangular(int inicial, int n)
{
    int produto = inicial * (inicial + 1) * (inicial + 2);
    if (produto == n)
    {
        return inicial; // resultado verdadeiro
    }
    else if (produto > n)
    {
        // falso pois o produto ja ficou maior que o n
        return 0;
    }
    else
    {
        return triangular(inicial + 1, n); // ou inicial + 1, n
    }
}
int main()
{
    int encont, n;
    scanf("%d", &n);

    encont = triangular(1, n);
    if (encont > 0)
    {
        printf("%d * %d * %d = %d\n", encont, encont + 1, encont + 2, n);
        printf("Verdadeiro");
    }
    else
    {
        printf("Falso");
    }

    return 0;
}