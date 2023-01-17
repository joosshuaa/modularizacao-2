#include <stdio.h>
#include <math.h>

void decimalParaBinario(int decimal) {
    int binario[32], i = 0;
    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Informe um numero decimal: ");
    scanf("%d", &decimal);
    printf("O numero binario equivalente e: ");
    decimalParaBinario(decimal);
    return 0;
}
