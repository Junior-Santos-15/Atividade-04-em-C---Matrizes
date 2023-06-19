#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    
    int i, j, semestre[2];
    float nota[3][2], media[2];
    float soma = 0;
    
    //Laço para semestre
    for (i = 0; i < 2; i++)
    {

        printf("%dº semestre: \n", i + 1);

        //Laço para notas
        for (j = 0; j < 3; j++)
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
    for (i = 0; i < 2; i++)
    {
        printf("%dº média do semestre: %.1f\n", i + 1, media[i]);

        for (j = 0; j < 3; j++)
        {            
            
            printf("%dº nota: %.1f\n", j + 1, nota[i][j]);
        }
    }

    system("pause");

    return 0;
}
