/*
   Arrays: 12) Faça um programa que leia um vetor de 10 posições.
   Verifique se existem valores iguais e os escreva na tela.
   Backes, André. Linguagem C (p. 128). GEN LTC. Edição do Kindle.
   Autor: Pedro Filho, 01/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
int pesquisar( int chave, int vt[], int size ); // pesquisar valores

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // gerador
   srand( time( NULL ) );

   // criar um vetor
   int vetor[ SIZE ] = {0};

   // chamar a função adicionar valores
   add_valor( vetor, SIZE);

   // chamar a função mostrar valores
   mostrar_vetor( vetor, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da função main

// função adicionar valores
void add_valor( int vt[], int size )
{
   // variáveis
   int psq = 0, resp = 0;

   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {
      // GERAR NÚMEROS ALEATÓTIOS
      psq = 1 + rand() % 100;
      // se psq diferente de zero
      if( psq != 0 ) {
         // pesquisar o valor
         resp = pesquisar( psq, vt, size );
         printf( "%d ", resp );
         // se a resposta da pesquisa for diferente do aleatório
         if( resp == -1 ) {
            // o vetor recebe esse valor
            vt[ i ] = psq;
         } // fim if interno
      } // fim if externo
   } // fim for
} // fim função

// função mostrar_vetor
void mostrar_vetor( int vt[], int size )
{
   printf( "\nVetor original: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );
   } // fim loop for

   // imprimir
   printf( " }\n" );
} // fim função

// função pesquisar
int pesquisar( int chave, int vt[], int size )
{
   // loop para pesquisar valores no vetor
   for( int i = 0; i < size; i++ ) {
      // verificar se chave é igual do vetor
      if( vt[ i ] == chave ) {
         // imprimir o valor
         return chave;
      } // fim if
   } // fim for
   return -1; // chave não encontrada
   // imprima
   //printf(" }\n" );
} // fim função
