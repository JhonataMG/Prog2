#include <stdio.h>
#include <stdlib.h>

int bolha(int v[5]){
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

int main() {

    int v[10] = {10, 3, 7, 2, 5, 4, 8, 6, 9, 1};
    int pos, menor;

    for (int i = 0; i < 9; i++) {
        menor = v[i];
        pos = i;
        for (int j = i+1; j < 10; ++j) {
            if (v[j] < menor)
                menor = v[j];
            pos = j;
        }
        v[pos] = v[i];
        v[i] = menor;

        };


        printf("%d\n", v);
        return 0;
    }
