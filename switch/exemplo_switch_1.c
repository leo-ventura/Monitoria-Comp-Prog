// Programa que busca utilizar o comando switch 
// destacando algumas singularidades do que é gerado
// por esse comando no código de máquina

#include <stdio.h>

// função recebe um inteiro x como parâmetro
// e realiza certa operações dependendo do valor de x
int exemplo_switch(int x) {
    int valor_de_retorno = 0;

    switch(x) {
        case -13:
            valor_de_retorno = 13*x;
            break;
        case 1:
            x += 2;
        case 2:
            valor_de_retorno = x+4;
            break;
        case 12:
            valor_de_retorno = x-11;
            break;
        case 35:
            valor_de_retorno = x/5;
            break;
        default:
            valor_de_retorno = 2*x;
            break;
    }

    return valor_de_retorno;
}

int main() {
    printf("exemplo_switch(-13): %d\n", exemplo_switch(-13));
    printf("exemplo_switch(  0): %d\n", exemplo_switch(  0));
    printf("exemplo_switch(  1): %d\n", exemplo_switch(  1));
    printf("exemplo_switch(  2): %d\n", exemplo_switch(  2));
    printf("exemplo_switch( 12): %d\n", exemplo_switch( 12));
    printf("exemplo_switch( 13): %d\n", exemplo_switch( 13));
    printf("exemplo_switch( 35): %d\n", exemplo_switch( 35));
    printf("exemplo_switch( 50): %d\n", exemplo_switch( 50));
    return 0;
}