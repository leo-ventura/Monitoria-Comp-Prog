#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <errno.h>

int main() {
    pid_t pid;

    pid = fork();      // divido o processo em processo pai e processo filho

    if(pid == 0) {     // processo filho
        // exit(0);       // filho sai
    }
    // sleep(5);          // coloco sleep pro filho morrer entao o retorno deve ser 0 nos 2
    pid_t return_waitpid2 = waitpid(-1, NULL, WUNTRACED);  // WUNTRACED => espera pelos filhos.
    pid_t return_waitpid  = waitpid(-1, NULL, WNOHANG);    // WNOHANG   => nao espera pelos filhos.

    if(errno == ECHILD)
        printf("errno igual a ECHILD no processo %d\n", getpid());
    // no processo pai, return_waitpid vai ser o pid do filho
    // no processo filho, return_waitpid vai ser -1 porque não há processo filho
    printf("valor de waitpid  no processo %d: %d\n", getpid(), return_waitpid);
    printf("valor de waitpid2 no processo %d: %d\n", getpid(), return_waitpid2);

    return 0;
}