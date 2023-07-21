#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/1109?quizId=8315
void metas(int linhasFeitas, int programasFeitos, int cont, int mediaProgramas, int mediaLinhas, int maisLinhas, int diaProdutivo, int maiorLinha)
{

    if (cont > 0)
    {

        scanf("%d %d", &programasFeitos, &linhasFeitas);
        mediaLinhas = linhasFeitas >= 100 ? mediaLinhas + 1 : mediaLinhas;
        mediaProgramas = programasFeitos >= 5 ? mediaProgramas + 1 : mediaProgramas;
        if (linhasFeitas >= maiorLinha)
        {
            maiorLinha = linhasFeitas;
            diaProdutivo = cont;
        }

        return metas(linhasFeitas, programasFeitos, cont - 1, mediaProgramas, mediaLinhas, maisLinhas, diaProdutivo, maiorLinha);
    }
    else if (cont <= 0)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", mediaProgramas);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", mediaLinhas);
        if (diaProdutivo == 7)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        if (diaProdutivo == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        if (diaProdutivo == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: TER�A\n");
        }
        if (diaProdutivo == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        if (diaProdutivo == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        if (diaProdutivo == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        if (diaProdutivo == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }
    }
}

int main()
{

    int linhasProgramadas;
    int programasFeito;
    metas(linhasProgramadas, programasFeito, 7, 0, 0, 0, 0, 0);

    return 0;
}