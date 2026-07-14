#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>
/*
    Aula 155:    Como calcular o fatorial com recursão?
*/

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }else {
        return n * fatorial(n - 1);
    }
};

int main() {
    int n;
    printf("Digite um numero positivo: ");
    scanf("%d",&n);
    printf("Fatorial de numeros: %u",fatorial(n));
    return 0;
}