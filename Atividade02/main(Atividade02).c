#include <stdio.h>

int main() {
    int valor = 0, serie0 = 0, serie1 = 1, contador;
    
    printf(" Digite um numero inteiro e positivo maior que 2: ");
    scanf("%d", &valor);
    printf("\n A sequencia de fibonacci ate o numero inserido e:");

    if (valor >= 3) {
        printf("\n %d", serie1);
        for (contador = 0; contador <= valor; contador = contador + 1) {
            serie0 = serie0 + serie1;
            serie1 = serie0 + serie1;
            printf(", %d, %d", serie0, serie1);
        }
    } else {
        printf(" Valor muito baixo.");
    }

    return 0;
}
