#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 135: Como concatenar duas Strings com a função strcat()?
*/

int main() {

    char palavras[50] = {"apenas"};
    char palavras2[20] = {" palavras teste"};
    strcat(palavras,palavras2);
    printf("%s\n",palavras);

    return 0;
}
