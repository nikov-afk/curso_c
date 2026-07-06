#include <stdio.h>

/*
 * Ler sexo, idade, peso e altura
 *  aula 11
 */

int main(void) {
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite sexo(f,F,m ou M) , idade, peso e altura:\n");
    scanf("%c %d %f %f", &sexo,&idade,&peso,&altura);
    printf("sexo: %c, idade: %d, peso: %f, altura: %f",sexo,idade,peso,altura);

    return 0;
}
