#include <stdio.h>

void imprime(int *v, size_t v_size) {
    for(int i=0; i< v_size; i++){
        printf("%d: %d\n", i, *(v+i));
    }
}

int main(){
    int i=10, j=0, *p;

    p=&i;
    *p=*p+1;
    j=*p+2;
    *p+=1;
    (*p)++;
    *p++;
    p++;

    printf("i: %d\tj: %d\tp: %p\t*p: %d\n", i, j, p, *p);

    int i, j, vet[3][3], vet2[3][3], *p;

    }




}