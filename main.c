#include <stdio.h>

/*
        Aula 22
    operador long para o tipo double
    double -> %lf
    long double -> %Lf

    __mingw_printf();
*/

int main(void) {
    long double x = 3.14159848948498489412272;
    printf("tamanho de um double na memoria: %d bytes\n", sizeof x);
    __mingw_printf("tamanho em memoria de um long double: %.10Lf\n", x);
    printf("tamanho em memoria de um long double: %.10Lf\n", x);
    return 0;
}
