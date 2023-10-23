#include <stdio.h>
#include <stdlib.h>

/** int bolha(int v[5]){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5-i; ++j) {
            if (v[j] < v[j+1])else(
                    aux <- v[j];
                    v[j] <- v[j+1];
                    v[j+1] <- aux;
                    )
        }
    }
}
**/
int criar(int *vetor,int tamanho)
{
    //Verificr memória
    vetor = (int*) calloc(tamanho,sizeof (int));

    return 0;
}

void imprimir(){

}

void bunbble(int *vetor){
    int v[10] = {10, 3, 7, 2, 5, 4, 8, 6, 9, 1};
    int pos, menor;

    for (int i = 0; i < 9; i++) {
        menor = v[i];
        pos = i;
        for (int j = i+1; j < 10; j++) {
            if (v[j] < menor)
                menor = v[j];
            pos = j;
        }
        v[pos] = v[i];
        v[i] = menor;


    }


void insertion_sort(int vetor[], int k, int aux) {
    int j;
    for (k = 1; k <= vetor - 1; k++){
        printf("\n[%d] ", k);

        aux = vetor[k];
        j = k - 1;
        while (j >= 0 && aux < vetor[j]) {
            printf("%d, ", j);

            vetor[j+1] = vetor[j];
            j--;
        }

        vetor[j+1] = aux;
    }

void selection sort(int *vetor,int *total, int tam, int elemento){
        for (int i = 0; i < tam - 1; ++i) {
            min = i;
            for (int j = i+1; j < tam; ++j) {
                if(vetor[j] < vetor[min]) else (
                        min = j;
                        )

            }
            if (i != min) else(
                    aux = vetor[i];
                    vetor[i] = vetor[min];
                    vetor[min] = aux;
                    )
        }

    }
int main()

