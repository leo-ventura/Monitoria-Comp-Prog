# Sobre o PEDA
PEDA é um programa escrito em Python para te ajudar a ter uma melhor visualização da execução do programa. Entre uma das suas melhores características está a visualização dos valores presentes nos registradores a cada pausa do programa.

# Instalação
Para utilizar o script, já tendo o repositório em seu computador, basta:
```
$ cd scripts
$ chmod 744 peda.sh
$ ./peda.sh
```
**OBS**: Esse script sobrescreverá qualquer configuração prévie do seu .gdbinit. Estou assumindo que você não utilizava o GDB antes.

# Como utilizar
Todos os comandos do GDB que você já conhece também funcionam com o PEDA.
Na minha opinião, a maior parte da análise dos programas produzidos ao longo do curso pode ser feita com poucos comandos:
- ```b main``` ou ```break main```: coloca um breakpoint na main.
- ```r arg``` ou ```run arg```: roda o programa com arg como argumento.
- ```n``` ou ```next```: pula para a próxima instrução.
- ```disas main``` ou ```disassemble main```: mostra o assembly da função main.
- ```set $eax = 5```: troca o valor do registrador eax para 5.
- ```set *0x08000500 = 5```: troca o valor presente no endereço 0x08000500 para 5.
- ```j main+5```: pula para a linha main+5.
- ```j *0x08000500```: pula para o endereço 0x08000500.
- ```info b```: lista os breakpoints.
- ```info file```: lista onde começam as seções do arquivo.
- ```info functions```: lista as funções presentes no programa. (obs: veja a diferença quando você roda esse comando antes e depois de ter rodado o programa).
- ```info r```: lista os registradores e seus valores.
- ```info r eax```: lista o valor do registrador eax.

# Dúvidas
Qualquer dúvida em relação à instalação ou utilização do GDB, PEDA ou matéria, sinta-se à vontade para entrar em contato comigo.