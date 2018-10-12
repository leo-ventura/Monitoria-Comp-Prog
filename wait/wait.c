#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int pid = fork();

    if(pid == 0) {
        printf("processo filho executando\n");
    }

    /*  waitpid(pid_t pid, int *statusp, int options)

        WAIT_ANY (-1)
            This constant macro (whose value is -1) specifies that waitpid should return status information about any child process.

        WAIT_MYPGRP (0)
            This constant (with value 0) specifies that waitpid should return status information about any child process in the same process group as the calling process.

        pid = -1    -> inclui todos os filhos
        pid > 0     -> leva em consideração apenas o filho com o PID pid

        *statusp    -> variavel para receber detalhes do processo

        These symbolic constants are defined as flags for the options argument to the waitpid function. You can bitwise-OR the flags together to obtain a value to use as the argument.

        WNOHANG (1)
            This flag specifies that waitpid should return immediately instead of waiting, if there is no child process ready to be noticed.

        WUNTRACED (2)
            This flag specifies that waitpid should report the status of any child processes that have been stopped as well as those that have terminated. 

        OPÇÕES MENCIONADAS PELO SLIDE DO AGUIAR ABAIXO:
        options = 0 -> espera pelos filhos terminarem; retorna PID do filho para o pai e -1 para o filho (pq ele nao tem filho para esperar)
        options = 1 -> nao espera pelo filho; waitpid retorna 0 para o pai e -1 para o filho (pq ele nao tem filho para esperar)
        options = 2 -> espera pelos filhos, retorna PID do filho terminado para o pai e -1 para o filho (pq ele nao tem filho para esperar)
        
        TODO
            diferença entre options 0 e 2

    */

    int wait, status;

    // usando as linhas abaixo para testar as saídas respectivas
    // wait = waitpid(WAIT_ANY, NULL, WNOHANG);
    wait = waitpid(-1, NULL, WNOHANG); // WNOHANG vale 1
    // wait = waitpid(WAIT_ANY, NULL, WUNTRACED);
    // wait = waitpid(WAIT_ANY, &status, WNOHANG);
    // wait = waitpid(WAIT_ANY, &status, WUNTRACED);
    // wait = waitpid(WAIT_MYPGRP, NULL, WNOHANG);
    // wait = waitpid(WAIT_MYPGRP, NULL, WUNTRACED);
    // wait = waitpid(WAIT_MYPGRP, &status, WNOHANG);
    // wait = waitpid(WAIT_MYPGRP, &status, WUNTRACED);

    // valor de status quando passado NULL será lixo
    printf("wait = %d do processo %d com status %d\n", wait, getpid(), status);

    return 0;
}