#include <stdio.h>

int main() {
    int numero, contagem = 0;
    
    printf(" Digite um numero inteiro e positivo: ");
    scanf("%i", &numero);
    
    if (numero > 0) {
        printf(" %i", numero);
        while (numero != contagem) {
            numero = numero - 1;
            printf(" %i", numero);
        }
    } else {
        printf(" Numero abaixo do esperado. Tente novamente");
    }

    return 0;
}
