#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i, j;
    char disciplina[3][250];
    float nota[2][3], media[3];
    float soma = 0;

    for (i = 0; i < 3; i++)
    {

        printf("%dº disciplina: \n", i + 1);
        scanf("%s", &disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Valor da %dº nota: ", j + 1);
            scanf("%f", &nota[i][j]);

            soma += nota[i][j];
        }

        fflush(stdin);

        media[i] = soma / j;
       soma =0;

        printf("\n");
    }

    system("cls");
    
printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("Disciplina : %s\n",disciplina[i]);
        printf("%dº média da disciplina : %.1f\n", i + 1, media[i]);

        for (j = 0; j < 2; j++)
        {            
            
            printf("%dº nota: %.1f\n", j + 1, nota[i][j]);
        }
    }

    system("pause");

    return 0;
}