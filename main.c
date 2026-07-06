#include <stdio.h>

/*
Aula 17
    operador short para o tipo int
    intervalo: -32.768 até 32.767
    %hi ou %d
 */

int main(void) {
    int y = 0;
    short int x = 32767;
    printf("tamanho de um int na memoria: %d bytes\n", sizeof y);
    printf("tamanho em memoria de um short int: %d\n", sizeof(x));
    return 0;
}
