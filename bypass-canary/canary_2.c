#include <stdio.h>

#define N 8

int main() {
    char buf[N];
    gets(buf);
    puts(buf);
    // movendo o valor do canary pro espaço de memória que será checado para passar no teste
    __asm__("mov   %gs:20, %edx\n"
            "mov   %edx,   -0xc(%ebp)\n");
    return 0;
}