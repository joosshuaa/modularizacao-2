#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool verificaSegmento(int x, int y) {
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
    if (digitos_x > digitos_y) {
        return false;
    }
    // comparar se x é um segmento de y
    int i;
    for (i = 0; i <= digitos_y - digitos_x; i++) {
        temp_y = y;
        temp_y /= pow(10, i);
        temp_y %= (int)pow(10, digitos_x);
        if (temp_y == x) {
            return true;
        }
    }
    return false;
}

int main() {
    int x, y;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &x);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &y);
    if (verificaSegmento(x, y)) {
        printf("%d e um segmento de %d\n", x, y);
    } else {
        printf("%d nao e um segmento de %d\n", x, y);
    }
    return 0;
}
