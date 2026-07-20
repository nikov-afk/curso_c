#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>
/*
    Aula 187: Ponteiro como parâmetro para uma função ou procedimento
*/
void imprimir(int *num) {
    printf("%d\n", *num);
    *num = 10;
}
int main() {
    int idade = 35;
    imprimir(&idade);
    printf("\nidade = %d\n", idade);
    return 0;
}