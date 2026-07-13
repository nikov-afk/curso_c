#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 141: Como dividir uma String em tokens com a função strtok()?
*/

int main() {

    char palavra[50] = {"Bom dia simpatia!"};
    char *ponteiro;

    ponteiro = strtok(palavra, " ");

    while (ponteiro != NULL) {
        printf("token: %s\n", ponteiro);
        ponteiro = strtok(NULL, " ");
    }

    return 0;
}