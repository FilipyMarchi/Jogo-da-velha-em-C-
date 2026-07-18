# Jogo da Velha em C++ 
 
> Projeto desenvolvido durante o meu primeiro semestre da faculdade com o objetivo principal de aprimorar minhas técnicas em lógica de programação e dominar os conceitos fundamentais do C++.

## Tecnologias Utilizadas

*   **Linguagem:** C++
*   **Controle de Versão:** Git
*   **Hospedagem:** GitHub
*   **Ambiente de Desenvolvimento:** Visual Studio Code (Para criação do Readme) Dev C++ (Para criação do código)

## Sobre o Projeto

Este é o clássico Jogo da Velha (Tic-Tac-Toe), projetado para rodar diretamente no terminal.

## Conceitos de Lógica Praticados

Para construir a inteligência e as regras do jogo, apliquei e consolidei os seguintes conceitos:

*   **Estruturas de Decisão (`if` / `else`):** Utilizadas para validar se uma jogada é permitida e para verificar as condições de vitória nas linhas, colunas e diagonais.
*   **Laços de Repetição (`do-while` / `while`):** Implementados para manter o loop principal do jogo ativo até que haja um vencedor ou o tabuleiro fique cheio.
*   **Manipulação de Variáveis e Tipos de Dados:** Controle do tabuleiro e alternância de turnos entre os caracteres `'X'` e `'O'`.

## Como Jogar

1. O jogo inicia mostrando o tabuleiro com as posições numeradas.
2. Cada jogador, na sua vez, deve escolher o número correspondente à casa onde deseja jogar.
3. O sistema valida se a casa está livre e computa a jogada.
4. O jogo termina assim que um jogador alinhar 3 símbolos idênticos ou quando todas as casas forem preenchidas (gerando o famoso empate ou "velha").
