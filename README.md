# Computadores e Programação
A matéria busca explicar como é organizada a estrutura de um computador. Uma revisão sobre linguagem de máquina é feita a fim de ensinar ao estudante como um programa escrito em C é traduzido para Assembly (na matéria é utilizada a arquitetura IA-32). Também são vistas técnicas de endereçamento, representação digital de dados, implementação e chamada de subrotinas, além de armazenamento e manipulação de vetores e estruturas heterogêneas. Além disso, também é ensinada a relação entre processos do sistema operacional (e como eles se comunicam entre si), resoluções de símbolos, bibliotecas estáticas e dinâmicas, e ligação de programas.

# Sobre o Assembly
O Assembly visto durante o curso é o da arquitetura IA-32 e uma maior explicação sobre essa arquitetura pode ser encontrada [aqui](https://en.wikipedia.org/wiki/IA-32). A sintaxe adotada é a da AT&T e você pode ver melhor sobre [aqui](https://en.wikibooks.org/wiki/X86_Assembly/GAS_Syntax).

# Recursos
- [PEDA](https://github.com/longld/peda): Uma das melhores coisas que você pode fazer para se enturmar melhor com a matéria é fazer seus próprios programas e analisar como eles funcionam "por trás dos panos". Uma ótima ferramente para te auxiliar nesse processo é o GDB. Para melhorar esse processo de análise dos códigos, recomendo que você utilize o PEDA. No diretório scripts, disponibilizei um script para automatizar o processo de instalação do PEDA para que ele utilize a sintaxe da AT&T.
- [Godbolt](https://godbolt.org/): Godbolt é um compilador online que te mostra o assembly de forma instantânea após colar seu código na parte à direita do site. Lembre sempre de deixar a opção de Intel desmarcada para ver a sintaxe do jeito que aprendemos no curso. Não esqueça, também, de incluir -m32 nas opções de compilação.

# Ambiente
Todo material desenvolvido para a monitoria tem como alvo um sistema operacional que use Linux.
- Numa máquina 64 bits, para compilar utilize sempre a flag -m32.
    Ex: `gcc -m32 exemplo_switch_1.c`.
- Numa máquina 32 bits, basta compilar normalmente com o GCC.
    Ex: `gcc exemplo_switch_1.c`.

**OBS**: Não posso garantir que os códigos funcionarão no Windows Subsystem for Linux. Para ser sincero, acredito que não funcionará nele, mas fica a seu critério testar ou não.

# Dúvidas
Sinta-se livre para entrar em contato comigo para tirar qualquer tipo de dúvida em relação à matéria ou configuração do ambiente.