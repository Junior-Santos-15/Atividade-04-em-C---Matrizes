#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i, j, semestre[2];
    float nota[3][2];

    for (i = 0; i < 2; i++)
    {
        printf("%d� semestre: \n", i + 1);

        for (j = 0; j < 3; j++)
        {
            printf("Valor da %d� nota: ", j + 1);
            scanf("%f", &nota[i][j]);
        }

        fflush(stdin);

        printf("\n");
    }

    system("cls");

    for (i = 0; i < 2; i++)
    {
        printf("%d� semestre: \n", i + 1);

        for (j = 0; j < 3; j++)
        {
            printf("%d� nota: %.1f\n", j + 1, nota[i][j]);
        }
    }

    system("pause");
    
    return 0;
}