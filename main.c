#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 146: Criando uma função que retorna o tamanho de uma string em C
*/

int minha_strlem(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }
    return tam;
}

int main() {
    char vet[20] = {"Ola"};
    printf("%d\n", strlen(vet));
    printf("%d\n", minha_strlem(vet));
    return 0;
}