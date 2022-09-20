#include <stdio.h>
#include <stdlib.h>

int main() {

    struct pessoa {
        char nome[31], email[41], telefone[10];
    };

    struct pessoa p;
    
    printf(" Digite seu nome: ");
    fgets(p.nome, 31, stdin);
    
    printf(" Digite seu email: ");
    fgets(p.email, 41, stdin);
    
    printf(" Digite seu telefone: ");
    fgets(p.telefone, 10, stdin);
    
    size_t n = sizeof(p.nome) / sizeof(p.nome[0]);
    size_t e = sizeof(p.email) / sizeof(p.email[0]);
    size_t t = sizeof(p.telefone) / sizeof(p.telefone[0]);
    
    printf("\n Nome possui %ld bytes", n);
    printf("\n Email possui %ld bytes", e);
    printf("\n Telefone possui %ld bytes", t);
    
    return 0;
}
