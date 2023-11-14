#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *cpf;
    char *nome;
    char *email;
} pessoa_t;

typedef struct no {
    char *chave;
    pessoa_t *valor;
    struct no *prox;
} no_t;

typedef struct dicionario {
    int tam;
    no_t **vetor;
} dicionario;

dicionario_t *criar_dicionario(int m) {
    dicionario_t *d = NULL;
    if (m < 1) {
        return NULL;
    }
    if ((d = (dicionario_t*) malloc(sizeof(dicionario))) == NULL){
        return  NULL;
    }
    d->tamanho = m;
    if ((d->vetor = calloc(m, sizeof (no_t*))) == NULL) {
        return NULL;
    }
    for (int i = 0; i < m; ++i) {
        d->vetor[i] = NULL;
    }
    return d;
}

void destruir_pessoa(pessoa_t *pessoa) {
    if (pessoa -> cpf != NULL) {
        free(pessoa -> cpf);
    }
    if (pessoa -> nome != NULL) {
        free(pessoa -> nome);
    }
    if (pessoa -> email != NULL) {
        free(pessoa -> email);
    }
    free(pessoa);
}

void destruir_no (no_t *no) {
    if (no != NULL) {
        free(no -> chave);
        destruir_pessoa(no -> valor);
        free(no);
    }
}
