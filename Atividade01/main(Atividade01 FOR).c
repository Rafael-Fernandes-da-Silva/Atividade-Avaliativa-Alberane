#include <stdio.h>

int main() {
    int numeroDigitado = 0, multiplicacao = 0, contador;
    
    printf(" Digite um numero inteiro e positivo: ");
    scanf("%d", &numeroDigitado);
    printf("\n O numero digitado foi: %d, e sua tabuada e: ", numeroDigitado);
    
    for (contador = 0; contador <= numeroDigitado; contador++) {
        multiplicacao = numeroDigitado * contador;
        printf("\n|%d", multiplicacao);
        printf("\n|=================");
    }

    return 0;
}
