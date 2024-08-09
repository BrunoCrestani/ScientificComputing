Projeto EP-02:
    Bruno Corrado Crestani GRR20221240
    Mateus Siqueira Ruzene GRR20221223


Objetivo:
Neste exercício procuramos melhorar a performance das funções de multiplicação de matrizes. O foco era aprimorar as operações multMatVet() e multMatMat() utilizando técnicas de otimização vistas em aula, como Unroll & Jam, Blocking, e Vetorização (SIMD/AVX).

Instruções:

    Otimização de Funções:
        multMatVet() e multMatMat():
            Funções utilizadas para demonstrar as operações sem otimizações.


        multMatVetUnrollJam() e multMatMatUnrollJamBk():
            Utilizamos técnicas como Unroll & Jam, Blocking, e Vetorização (SIMD/AVX) para maximizar a performance.
            O fator de unroll (UF) e o fator de blocking (BK) são definidos via macros em matriz.h, buscando o melhor desempenho.

    LIKWID:
        LIKWID foi utilizado para medir a performance das funções otimizadas em diversos aspectos,
        Comparando os resultados antes e depois da otimização.

Análise de Desempenho:

Para avaliar o desempenho das funções otimizadas, execute uma série de testes para diferentes tamanhos de matrizes. Os resultados devem ser apresentados em gráficos e tabelas, conforme descrito abaixo:

    Tamanhos das Matrizes (N):
        Realize os testes para os seguintes tamanhos de matrizes: 64, 100, 128, 200, 256, 512, 600, 900, 1024, 2000, 2048, 3000, 4000, 5000, 6000, 10000.

    Testes a Realizar:

    a. Teste de Tempo:
        Ocorre utilizando a função timestamp() para a medição do tempo.

    b. Banda de Memória:
        Optamos por utilizar o L3 do LIKWID para medir a banda de memória.
        Apresente o resultado em "Memory bandwidth [MBytes/s]".

    c. Cache Miss L2:
        Utilizamos o grupo L2CACHE do LIKWID para medir o cache miss ratio.
        Apresente o resultado em "cache miss RATIO".

    d. Energia:
        Utilizamos o grupo ENERGY do LIKWID para medir o consumo de energia.

    e. Operações Aritméticas:
        Optamos o grupo FLOPS_DP do LIKWID para medir as operações aritméticas.
        Reporte os valores de FLOPS_DP e FLOPS_AVX em "MFLOP/s", apresentando-os como duas colunas separadas na mesma tabela.

Resultados:
Os resultados de cada teste são apresentados em gráficos, onde o eixo X representa o tamanho da matriz em escala logarítmica e o eixo Y representa o indicador de performance correspondente (tempo,L3, L2CACHE, ENERGY, operações, FLOPS_DP e FLOPS_AVX).
