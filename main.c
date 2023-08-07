#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculadora.h"

int main(int argc, char *argv[]) {
   // int i = 0;
   // do {printf("Que ano você nasceu?\n");
   //     scanf("%d", &i);
   // }while (i>2023);
//int idade=2023-i;
    //printf("%d\n",idade);

   // printf("Total de Arg: %d\n", argc);
   // printf("O primeiro Arg: %s\n", argv[0]);

  //  int ano = atoi(argv[1]);
   // printf("Você fará em: %d\n");
   //===========================================================

   int media_cima = ceil(5.5);
   int media_baixo = floor(5.5);
    printf("media cima %d, media baixo %d\n", media_cima, media_baixo);

    soma(10,2);
    sub(10,2);

    return 0;
}
