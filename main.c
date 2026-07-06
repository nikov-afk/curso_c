#include <stdio.h>

/*
        Aula 20
    tamanho de um float na memória
    %f
*/

int main(void) {
    float x = 3.1415;
    printf("tamanho de um float na memoria: %d bytes\n", sizeof(float));

    printf("tamanho em memoria de um  int: %f\n", x);
    return 0;
}
