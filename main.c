#include <stdio.h>

/*
        Aula 21
    tipo double
    %lf
*/

int main(void) {
    double x = 3.1415;
    printf("tamanho de um double na memoria: %d bytes\n", sizeof(double));

    printf("tamanho em memoria de um  double: %lf\n", x);
    return 0;
}
