#include <stdio.h>
#include <stdbool.h>

int contaDigitos(int n, int d) {
    int contador = 0;
    while (n > 0) {
        if (n % 10 == d) {
            contador++;
        }
        n /= 10;
    }
    return contador;
}

bool verificaPermutacao(int a, int b) {
    for (int d = 0; d <= 9; d++) {
        if (contaDigitos(a, d) != contaDigitos(b, d)) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &b);
    if (verificaPermutacao(a, b)) {
        printf("%d e uma permutacao de %d\n", a, b);
    } else {
        printf("%d nao e uma permutacao de %d\n", a, b);
    }
    return 0;
}
