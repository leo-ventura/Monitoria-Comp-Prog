# Switch
Switch é um comando utilizado a fim de evitar que vários if's sejam necessários ao longo do programa.

# Assembly
Sua estrutura no Assembly é extremamente interessante. O comando utiliza uma tabela para realizar um _pulo indireto_ para o case desejado.

# Análise
Assim como todo programa desse curso, compile o código disponibilizado com `gcc -m32 exemplo_switch_1.c -S` se estiver numa máquina de 64 bits para ver o código de máquina gerado para 32 bits.

# Perguntas
É possível recuperar todos os cases de um programa apenas olhando seu Assembly. Dessa forma, tente associar:
- Por que tem uma instrução que soma 13 ao edx? O que havia em edx naquele momento?
- Por que a instrução seguinte compara edx com 48? Qual o último case do switch? Existe alguma relação disso com a instrução anterior?

Tente comentar a tabela de instrução indireta com cada um dos casos e pra onde ele vai.
![tabela de instrução indireta](https://user-images.githubusercontent.com/24783497/46248098-393f9800-c3eb-11e8-96a2-6de434dfceff.png)

# Dúvidas
Qualquer dúvida basta entrar em contato comigo.
