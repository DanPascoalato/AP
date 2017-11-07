#include <stdio.h>

typedef struct{
  int vetor[10];
  int primeiro;
  int ultimo;
  int tamanho;
} Fila;

void inicializaFila(Fila *p){
  p->tamanho=0;
  p->primeiro=-1;
  p->ultimo=-1;
}

int vazia(Fila *p){
  if(p->tamanho==0){
    return 1;
  }
  return 0;
}

int cheia(Fila *p){
  if(p->tamanho>=8){
    return 1;
  }
  return 0;
}

void inserir(Fila *p, int valor){
  if(cheia(p)==1){
    printf("ERRO: Fila cheia\n");
    return;
  }
  p->primeiro = 0;
  p->vetor[p->tamanho]=valor;
  p->tamanho++;
  p->ultimo = p->tamanho;
  printf("%d\n", p->tamanho);
}

int remover(Fila *p){
  printf("%d\n", p->tamanho);
  if(vazia(p->tamanho)==1){
    printf("%d\n", p->tamanho);
    printf("ERRO: Fila vazia\n");
    return 1;
  } else
  printf("%d\n", p->tamanho);
}

void imprimeFila(Fila *p){
  for(int i=0; i<p->tamanho; i++){
    printf("%d ", p->vetor[i]);
  }
  printf("\n");
}