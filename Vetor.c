#include <stdio.h>
#define tam 5

/**
 * Fazer a operação básica em vetores, 
 * sendo elas, adição, remoção, extrair min e max
**/

int main(int argc, char const *argv[])
{
    int vetor[tam];
    int id, elm;

    for (id = 0; id < tam; id++)
    {
        scanf("%d", &elm);
        vetor[id] = elm;
    }
    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    
    printf("\n");

    return 0;
}