#include <stdio.h>

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

int main() {
    int n, d;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    printf("Informe um digito (0-9): ");
    scanf("%d", &d);
    printf("O digito %d aparece %d vez em %d\n", d, contaDigitos(n, d), n);
    return 0;
}
