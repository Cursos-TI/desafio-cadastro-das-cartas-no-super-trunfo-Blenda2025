#include <stdio.h>

int main(){
  char Estado[50] = "Pernambuco";
  char Codigo[50] = "A01";
  char Cidade[50] = "Recife"; 
  int Populacao = 9000000;
  float Area = 218.8;
  float PIB = 33.094;
  int Turisticos = 30;

  printf("digite a sua primeira carta:\n");
  scanf("%c", &Codigo);


  printf("Estado: %s\n", Estado);
  printf("Codigo da Carta: %s\n",Codigo);
  printf("Cidade: %s\n", Cidade);
  printf("Populacao: %d\n", Populacao);
  printf("Area: %.3f\n", Area);
  printf("PIB: %.3f\n", PIB);
  printf("Pontos Turisticos: %d\n", Turisticos);

  printf("digite a sua segunda carta:\n");
  scanf("%c", &Codigo2);

  char Estado2[50] = "Paraiba";
  char Codigo2[50] = "B01";
  char Cidade2[50] = "Patos"; 
  int Populacao2 = 113000;
  float Area2 = 513;
  float PIB2 = 18.329;
  int Turisticos2 = 10;

  printf("Estado: %s\n", Estado2);
  printf("Codigo da Carta: %s\n",Codigo2);
  printf("Cidade: %s\n", Cidade2);
  printf("Populacao: %d\n", Populacao2);
  printf("Area: %.3f\n", Area2);
  printf("PIB: %.3f\n", PIB2);
  printf("Pontos Turisticos: %d\n", Turisticos2);

}