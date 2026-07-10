#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
    Aula 132: Como identificar o fim de uma String?
*/

int main() {
    int i;
    char palavras[12] = {"apenas teste"};
    printf("%s\n", palavras);

    //printf("Digite seu nome: ");
    //scanf("%10[^\n]",palavras);
    //gets(palavras);
    //fgets(palavras, 10, stdin);
    i = 0;
    while (palavras[i] != '\0') {
        printf("%c", palavras[i++]);
    }
    // for(i=0;i<12;i++) {
    //     printf("%d %d\n",i, palavras[i]);
    // }
    printf("\n");


    return 0;
}
