#include <stdio.h>
#include "Fila.h"

int main(){
  Fila minhaFila;
  int temp;
  
  inicializaFila(&minhaFila);
  inserir(&minhaFila, 19);
  inserir(&minhaFila, 28);
  inserir(&minhaFila, 30);
  inserir(&minhaFila, 12);
  imprimeFila(&minhaFila);
  printf("Até aqui foi\n");
  temp=remover(&minhaFila);
  temp=remover(&minhaFila);
  imprimeFila(&minhaFila);
  inserir(&minhaFila, 51);
  inserir(&minhaFila, 48);
  imprimeFila(&minhaFila);
}