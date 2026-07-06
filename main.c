#include <stdio.h>

/*
 * Operador sizeof
 *  aula 16
 */

int main(void) {
    float x = 1.0;
    printf("tamanho de um float na memoria: %d bytes\n", sizeof x);
    printf("tamanho em memoria de um int: %d\n", sizeof(int));
    return 0;
}
