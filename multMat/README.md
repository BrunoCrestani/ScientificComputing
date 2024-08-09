Objetivo:
O objetivo deste exercício é melhorar a performance das funções de multiplicação de matrizes implementadas no exercício anterior (Otimização de Código Serial - parte 1). O foco é aprimorar as operações multMatVet() e multMatMat() utilizando técnicas de otimização vistas em aula, como Unroll & Jam, Blocking, e Vetorização (SIMD/AVX).

Instruções:

    Otimização de Funções:
        multMatVet(): Otimizar a função que realiza a multiplicação de matriz por vetor.
        multMatMat(): Otimizar a função que realiza a multiplicação de duas matrizes.
        Utilize técnicas como Unroll & Jam, Blocking, e Vetorização (SIMD/AVX) para maximizar a performance.
        O fator de unroll (UF) e o fator de blocking (BK) devem ser definidos via macros em matriz.h, com valores que ofereçam o melhor desempenho.

    Ferramenta de Análise:
        Utilize a ferramenta LIKWID para medir a performance das funções otimizadas.
        Compare os resultados antes e depois da otimização.

Análise de Desempenho:

Para avaliar o desempenho das funções otimizadas, execute uma série de testes para diferentes tamanhos de matrizes. Os resultados devem ser apresentados em gráficos e tabelas, conforme descrito abaixo:

    Tamanhos das Matrizes (N):
        Realize os testes para os seguintes tamanhos de matrizes: 64, 100, 128, 200, 256, 512, 600, 900, 1024, 2000, 2048, 3000, 4000, 5000, 6000, 10000.

    Testes a Realizar:

    a. Teste de Tempo:
        Meça o tempo médio de execução da função em milissegundos.
        Utilize a função timestamp() para a medição do tempo.
        No gráfico, a ordenada (tempo) deve estar em escala logarítmica.

    b. Banda de Memória:
        Utilize o grupo MEM ou L3 do LIKWID para medir a banda de memória.
        Apresente o resultado em "Memory bandwidth [MBytes/s]".

    c. Cache Miss L2:
        Utilize o grupo CACHE ou L2CACHE do LIKWID para medir o cache miss ratio.
        Apresente o resultado em "cache miss RATIO".

    d. Energia:
        Utilize o grupo ENERGY do LIKWID para medir o consumo de energia.
        Apresente o resultado em "Energy [J]".

    e. Operações Aritméticas:
        Utilize o grupo FLOPS_DP do LIKWID para medir as operações aritméticas.
        Reporte os valores de FLOPS_DP e FLOPS_AVX em "MFLOP/s", apresentando-os como duas colunas separadas na mesma tabela.

Resultados:
Os resultados de cada teste devem ser apresentados em gráficos, onde a abcissa (eixo X) representa o tamanho da matriz (em escala logarítmica) e a ordenada (eixo Y) representa o indicador de performance correspondente (tempo, banda de memória, cache miss, energia, operações aritméticas).
