#include <stdio.h>
#include <math.h>

int binarioParaDecimal(int binario) {
    int decimal = 0, potencia = 0;
    while (binario > 0) {
        int resto = binario % 10;
        decimal += resto * pow(2, potencia);
        binario /= 10;
        potencia++;
    }
    return decimal;
}

int main() {
    int binario;
    printf("Informe um numero binario: ");
    scanf("%d", &binario);
    int decimal = binarioParaDecimal(binario);
    printf("O numero decimal equivalente e: %d\n", decimal);
    return 0;
}
