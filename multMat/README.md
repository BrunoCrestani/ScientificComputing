Integrantes:

Bruno Crestani GRR:20221240

Mateus Ruzene GRR:20221223
EP-01 - Multiplicação de Matrizes
Explicação sobre o algoritmo

Este programa realiza operações de multiplicação entre matrizes e vetores, utilizando tanto métodos convencionais quanto otimizações, e mede o desempenho dessas operações usando a biblioteca LIKWID. Ele foi implementado para aceitar uma matriz de ordem arbitrária e executar as seguintes operações:

    Multiplicação de matriz por vetor (MATxVET) sem otimizações.
    Multiplicação de matriz por matriz (MATxMAT) sem otimizações.
    Multiplicação de matriz por vetor (MATxVET) com otimizações aplicando unroll e jam.
    Multiplicação de matriz por matriz (MATxMAT) com otimizações aplicando unroll, jam e blocking.

Estrutura do Código

    matmult.c: Arquivo principal do projeto que contém a lógica de execução das operações, tratamento de linha de comando, e medições de tempo utilizando a biblioteca LIKWID.

    matriz.c: Implementa as funções para geração, manipulação, e liberação de matrizes e vetores utilizados nas operações.

    utils.h: Contém funções utilitárias como a marcação de tempo, além de macros e definições utilizadas no projeto.

Geração e Manipulação de Matrizes e Vetores

A alocação de memória para matrizes e vetores é realizada de forma dinâmica, garantindo que os dados necessários sejam corretamente gerenciados ao longo da execução do programa. A memória é liberada ao final para evitar vazamentos.
Execução do Programa

O programa segue a seguinte sequência de passos:

    Leitura da ordem da matriz a partir da linha de comando.
    Geração das matrizes e vetores necessários.
    Execução das operações de multiplicação de matriz por vetor e matriz por matriz, tanto sem otimizações quanto com otimizações.
    Impressão dos tempos de execução para cada uma das operações.
    Liberação de toda a memória alocada.

Otimizações Utilizadas

As otimizações implementadas incluem técnicas de unroll e jam para melhorar a eficiência das operações de multiplicação de matrizes, bem como blocking para otimizar o uso de cache na multiplicação de matriz por matriz.
Bibliotecas Utilizadas

    LIKWID: Utilizada para marcar e medir o tempo de execução das operações.
    Standard Libraries: Utilizadas para alocação dinâmica de memória e manipulação básica de vetores e matrizes.

Arquivos Adicionais

    gendata.sh: Script utilizado para gerar dados de entrada para o programa.
    plot.gp: Script de plotagem para visualização dos resultados obtidos pelo programa.

Funções Importantes
Função multMatVet

Esta função realiza a multiplicação de uma matriz por um vetor sem otimizações.
Parâmetros

    MatRow mRow: Matriz de entrada.
    Vetor vet: Vetor de entrada.
    int rows: Número de linhas da matriz.
    int cols: Número de colunas da matriz.
    Vetor res: Vetor de resultado.

Função multMatVetUnrollJam

Realiza a multiplicação de uma matriz por um vetor aplicando as otimizações de unroll e jam.
Função multMatMat

Esta função realiza a multiplicação de duas matrizes sem otimizações.
Função multMatMatUnrollJamBk

Realiza a multiplicação de duas matrizes aplicando as otimizações de unroll, jam e blocking.
Possíveis Erros

Erros relacionados à alocação de memória são tratados com mensagens de erro e encerramento adequado do programa para evitar comportamento indefinido.
