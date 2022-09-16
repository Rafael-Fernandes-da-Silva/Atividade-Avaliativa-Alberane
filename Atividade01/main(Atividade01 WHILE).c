#include <stdio.h>

int main() {
    int numeroDigitado = 0, multiplicacao = 0, contador = 0;
    
    printf(" Digite um numero inteiro e positivo: ");
    scanf("%d", &numeroDigitado);
    printf("\n O numero digitado foi: %d, e sua tabuada e: ", numeroDigitado);
    
    while (contador <= numeroDigitado) {
        multiplicacao = numeroDigitado * contador;
        printf("\n|%d", multiplicacao);
        printf("\n|=================");
        contador = contador + 1;
    }

    return 0;
}
