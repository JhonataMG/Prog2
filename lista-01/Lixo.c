#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"pt_BR.UTF-8");

    wchar_t nome[80];

    wprintf(L"Entre com o nome da cidade: ");
    fgetws(nome, sizeof (nome), stdin);
    wprintf(L"Total de char: %ld\n", wcslen(nome));
    return 0;

}