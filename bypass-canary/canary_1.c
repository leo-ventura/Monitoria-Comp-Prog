#include <stdio.h>

#define N 10

int main(int agrc, char* argv[]) {
    char buf[N];                        // defino um buffer de tamanho N
    unsigned int can;                   // crio uma variavel para armazenar o valor do canary
    int *pointer = (int *)&buf[N];      // aqui pego o endereço do canary (buf + N) -> como fica logo acima do buffer, consigo pegar pelo endereço de buf[N]
    can = *pointer;                     // aqui pego o endereço do canary e salvo em can
    printf("canary: 0x%x\n", can);      //printo o canary para acompanhar o que está acontecendo
    printf("o tamanho do buffer é: %d\n", N);   // printo o tamanho do buffer para saber quanto preciso escrever para sobrescrever
    gets(buf);                          // leio input do usuario
    puts(buf);                          // printo o que foi lido como entrada
    printf("canary depois: 0x%x\n", *pointer);  // printo o valor do canary sobrescrito
    *pointer = can;                     // restauro o valor do canary aqui
    printf("canary restaurado: 0x%x\n", *pointer);  // printo o valor do canary restaurado para ver que funcionou direitinho
    printf("depois do canary tenho: 0x%x\n", pointer + 4); // apenas teste para ver o que consigo sobrescrever depois de restaurar o canary
    //pointer[4] = 0x565555c9;
    //pointer = &pointer + 4;
    //*pointer = 0x565555c9;
    return 0;
}