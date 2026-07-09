#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
    Aula 131: Lendo uma String com a função fgets()
*/

int main() {

    char palavras[10];
    printf("%s\n", palavras);

    printf("Digite seu nome: ");
    //scanf("%10[^\n]",palavras);
    //gets(palavras);
    fgets(palavras, 10, stdin);

    printf("%s\n", palavras);

    return 0;
}
