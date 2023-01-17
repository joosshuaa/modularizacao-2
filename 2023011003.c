#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool verificaUltimosDigitos(int x, int y) {
    int digitos_x = 0, digitos_y = 0;
    int temp_x = x, temp_y = y;
    // contar número de dígitos de x e y
    while (temp_x > 0) {
        digitos_x++;
        temp_x /= 10;
    }
    while (temp_y > 0) {
        digitos_y++;
        temp_y /= 10;
    }
    // comparar os últimos dígitos de x com y
    if (digitos_x > digitos_y) {
        x /= pow(10, digitos_x - digitos_y);
    }
    return x == y;
}

int main() {
    int x, y;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &x);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &y);
    if (verificaUltimosDigitos(x, y)) {
        printf("%d corresponde aos ultimos digitos de %d\n", y, x);
    } else {
        printf("%d nao corresponde aos ultimos digitos de %d\n", y, x);
    }
    return 0;
}
