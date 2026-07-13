#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 139: Como encontrar uma substring com a função strstr()
*/

int main() {

    char palavra[50] = {"Bom dia simpatia!"};
    char str[] = {"dia"};
    char *ponteiro;

    ponteiro = strstr(palavra, str);

    if (ponteiro != NULL) {
        printf("%c\n", *ponteiro);
    }


        return 0;
}