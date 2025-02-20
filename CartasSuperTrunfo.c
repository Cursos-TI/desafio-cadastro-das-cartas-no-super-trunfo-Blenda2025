#include <stdio.h>

int main(){
  char Estado[50] = "Pernambuco";
  char Codigo[50] = "A01";
  char Cidade[50] = "Recife"; 
  int Populacao = 9000000;
  float Area = 218.8;
  float PIB = 33.094;
  int Turisticos = 30;

  printf("Estado: %s\n", Estado);
  printf("Codigo: %s\n",Codigo);
  printf("Cidade: %s\n", Cidade);
  printf("Populacao: %d\n", Populacao);
  printf("Area: %.3f\n", Area);
  printf("PIB: %.3f\n", PIB);
  printf("Turisticos: %d\n", Turisticos);

}