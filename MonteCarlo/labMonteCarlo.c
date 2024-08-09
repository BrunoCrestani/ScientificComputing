#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define DIFF 0.0

#define NRAND    ((double) rand() / RAND_MAX)  // drand48() 
#define SRAND(a) srand(a) // srand48(a)


double styTa(double x){
  return x*(5 + x*(-16 + (x*x)));
}

// Integral Monte Carlo da função Styblinski-Tang de 2 variáveis
double styblinskiTang(double a, double b, int namostras, int dimension)
{
  double resultado;
  double soma = 0.0;
  
  printf("Metodo de Monte Carlo (x, y).\n");
  printf("a = (%f), b = (%f), n = (%d), variaveis = 2\n", a, b, namostras);
  
  double t_inicial = timestamp();
  
  for (int i = 0;i<namostras; i++) {
    for(int j=0;j<dimension;j++){
      double x = a + ((double)random() / RAND_MAX) * (b-a);
      soma += (styTa(x));
    }
  }
    
  resultado = (soma/2) / namostras * ((b - a) * (b - a));  

  double t_final = timestamp();
  printf("Tempo decorrido: %f seg.\n", t_final - t_inicial);
  
  return resultado;
}

double retangulos_xy(double a, double b, int npontos) {

  double h= (a-b)/npontos;
  double resultado;
  double soma = 0;
  
  printf("Metodo dos Retangulos (x, y).\n");
  printf("a = (%f), b = (%f), n = (%d), h = (%lg)\n", a, b, npontos, h);
  
  double t_inicial = timestamp();

  for(int i=0;i<npontos;i++){
    for(int j=0;j<npontos;j++){
      double x = a + i * h;
      double y = a + j * h;
      soma += h*(styTa(x) + styTa(y));
    }
  }
  
  resultado = soma/2;

  double t_final = timestamp();
  printf("Tempo decorrido: %f seg.\n", t_final - t_inicial);
  
  return resultado;
}

int main(int argc, char **argv) {

  if (argc < 5) {
    printf("Utilização: %s inicial final n_amostras n_variaveis\n", argv[0]);
    return 1;
  }

  // INICIAR VALOR DA SEMENTE
  srand(20241);

  // CHAMAR FUNÇÕES DE INTEGRAÇÃO E EXIBIR RESULTADOS
  printf("%lg", styblinskiTang(atoi(argv[1]), atoi(argv[2]), atof(argv[3]), atoi(argv[4])));
  printf("\n");
  printf("%lg", retangulos_xy(atoi(argv[1]), atoi(argv[2]), atof(argv[3])));
  printf("\n");

  
  return 0;
}

