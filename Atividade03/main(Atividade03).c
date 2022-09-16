#include <stdio.h>

int main() {
    int dia, ano, mes, diames, resultado, somaano;
    
    printf(" Digite sua data de nascimento(dd/mm/aaaa): ");
    scanf("%i %i %i", &dia, &mes, &ano);
    
    dia = dia * 100;
    diames = dia + mes;
    somaano = diames + ano;
    resultado = somaano + somaano;
    
    if (resultado % 5 == 0) {
        printf(" Seu perfil e: Timido");
    } else if (resultado % 5 == 1) {
        printf(" Seu perfil e: Sonhador");
    } else if (resultado % 5 == 2) {
        printf(" Seu perfil e: Paquerador");
    } else if (resultado % 5 == 3) {
        printf(" Seu perfil e: Atraente");
    } else {
        printf(" Seu perfil e: Irresistivel");
    }

    return 0;
}
